/*==================================================================================================
* Project : RTD AUTOSAR 4.7
* Platform : CORTEXM
* Peripheral : S32K3XX
* Dependencies : none
*
* Autosar Version : 4.7.0
* Autosar Revision : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version : 5.0.0
* Build Version : S32K3_RTD_5_0_0_D2408_ASR_REL_4_7_REV_0000_20241002
*
* Copyright 2020 - 2024 NXP
*
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be 
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* User includes */
#include "bootloader_main.h"
#include "TP.h"
#include "S32K324_CAN/public_inc/includes.h"

volatile int exit_code = 0;

#define CAN_MSG_TYPE (CAN_MSG_ID_STD)
#define RX_MAILBOX_ID (1u)
#define TX_MAILBOX_ID (2u)
Flexcan_Ip_MsgBuffType g_RXCANMsg;

extern void CAN0_ORED_0_31_MB_IRQHandler(void);
extern void Swt_Ip_Swt0_Isr(void);

const Flexcan_Ip_DataInfoType RXCANMsgConfig =
{
    .msg_id_type = FLEXCAN_MSG_ID_STD,
    .data_length = 64u,
    .fd_enable   = TRUE,
    .enable_brs  = TRUE,
    .is_polling = FALSE,
    .is_remote = FALSE
};

Flexcan_Ip_DataInfoType TXCANMsgConfig =
{
    .msg_id_type = FLEXCAN_MSG_ID_STD,
    .data_length = 8u,
    .is_polling = FALSE,
    .is_remote = FALSE
};

/**
 * @brief
 *
 * @param instance
 * @param eventType
 * @param buffIdx
 * @param flexcanState
 */
void CAN_ISR_Callback(uint8 instance,Flexcan_Ip_EventType eventType,
                      uint32 buffIdx,const Flexcan_Ip_StateType * flexcanState)
{

    if(FLEXCAN_EVENT_RX_COMPLETE == eventType)
    {
        TP_DriverWriteDataInTP(g_RXCANMsg.msgId, g_RXCANMsg.dataLen, g_RXCANMsg.data);
        FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MAILBOX_ID, &g_RXCANMsg, FALSE);
    }
    else if(FLEXCAN_EVENT_TX_COMPLETE == eventType)
    {
        TP_DoTxMsgSuccesfulCallback();
    }
    else
    {}
}

/**
 * @brief
 *
 */
void SendMsg(void)
{
	Flexcan_Ip_MsgBuffType txMsg;
	Flexcan_Ip_StatusType status = FLEXCAN_STATUS_SUCCESS;
    uint32 dataLen;
    status = FlexCAN_Ip_GetTransferStatus(INST_FLEXCAN_0, TX_MAILBOX_ID);
	if(FLEXCAN_STATUS_SUCCESS == status)
	{
		if(TRUE == TP_DriverReadDataFromTP(sizeof(txMsg.data), txMsg.data, &(txMsg.msgId), &(dataLen)))
		{
            TXCANMsgConfig.data_length = dataLen;
            FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MAILBOX_ID, &TXCANMsgConfig, txMsg.msgId, txMsg.data);
		}
	}
}

/**
 * @brief
 *
 */
void AbortTransferMsg(void)
{
    FlexCAN_Ip_AbortTransfer(INST_FLEXCAN_0,TX_MAILBOX_ID);
}

/**
 * @brief
 *
 */
/* ===== 调试诊断变量 ===== */
volatile uint32 g_resetReason = 0xFFu;   /* 复位原因枚举值 */
volatile uint32 g_raw_RGM_DES = 0u;      /* 原始DES寄存器（破坏性复位状态）*/
volatile uint32 g_raw_RGM_FES = 0u;      /* 原始FES寄存器（功能性复位状态）*/
volatile uint32 g_faultSource  = 0u;     /* 0=正常, 1=HardFault, 2=BusFault, 3=MemManage, 4=UsageFault */
volatile uint32 g_faultPC     = 0u;      /* 故障时的PC地址 */
volatile uint32 g_faultLR     = 0u;      /* 故障时的LR地址 */
volatile uint32 g_faultCFSR   = 0u;      /* Configurable Fault Status Register */
volatile uint32 g_faultHFSR   = 0u;      /* HardFault Status Register */
volatile uint32 g_faultMMFAR  = 0u;      /* MemManage Fault Address */
volatile uint32 g_faultBFAR   = 0u;      /* BusFault Address */

/**
 * @brief CAN Error/BusOff 中断处理（替代 undefined_handler 死循环）
 * @details FlexCAN0_0_IRQn 会在CAN总线错误时触发，
 *          如果用 undefined_handler 处理，CPU 会卡死。
 *          这里只做清除错误标志，不挂起。
 */
void FlexCAN0_Error_IRQHandler(void)
{
    /*
     * FlexCAN0 base: 0x40304000, ESR1 offset: 0x20
     * 读取 ESR1 并写回清除错误标志 (W1C)
     */
    volatile uint32 *pESR1 = (volatile uint32 *)0x40304020u;
    volatile uint32 esr = *pESR1;
    *pESR1 = esr;  /* W1C 清除所有错误标志 */
    (void)esr;
}

static void BSP_init(void)
{
    Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS_PortContainer_0_BOARD_InitPeripherals,g_pin_mux_InitConfigArr_PortContainer_0_BOARD_InitPeripherals);
    IntCtrl_Ip_Init(&IntCtrlConfig_0);

    /*
     * 修复关键问题：FlexCAN0_0_IRQn 在 IntCtrlConfig_0 中被使能，
     * 但默认 handler 是 undefined_handler（死循环）。
     * 必须在 CAN 初始化之前安装正确的处理函数或禁用它。
     */
    IntCtrl_Ip_InstallHandler(FlexCAN0_0_IRQn, FlexCAN0_Error_IRQHandler, NULL_PTR);

    IntCtrl_Ip_EnableIrq(FlexCAN0_1_IRQn);
	IntCtrl_Ip_InstallHandler(FlexCAN0_1_IRQn, CAN0_ORED_0_31_MB_IRQHandler, NULL_PTR);
    IntCtrl_Ip_EnableIrq(LPUART6_IRQn);
    IntCtrl_Ip_InstallHandler(LPUART6_IRQn, LPUART_UART_IP_6_IRQHandler, NULL_PTR);
    IntCtrl_Ip_InstallHandler(SWT0_IRQn, Swt_Ip_Swt0_Isr, NULL_PTR);
	FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
	FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);
	FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MAILBOX_ID, &RXCANMsgConfig, RX_PHY_ID);
	FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MAILBOX_ID, &g_RXCANMsg, FALSE);

    /*
     * 注意：已删除 "FRET = 0" 这行代码！
     * 原因：FRET=0 意味着任何一次功能复位都会升级为破坏性复位（拉低nRST），
     * 这极其危险。S32K324 默认 FRET=15（允许16次功能复位才升级），
     * 不需要手动修改此值。
     */

    g_resetReason = (uint32)Power_Ip_GetResetReason();
}


/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

int test_cnt;
int main(void)
{
    /*
     * 最先保存原始复位状态寄存器（在任何代码清除它们之前）
     * MC_RGM 基地址: 0x4028C000
     *   DES (Destructive Event Status) 偏移 0x00
     *   FES (Functional Event Status)  偏移 0x08
     */
    g_raw_RGM_DES = *(volatile uint32 *)0x4028C000u;  /* MC_RGM_DES */
    g_raw_RGM_FES = *(volatile uint32 *)0x4028C008u;  /* MC_RGM_FES */

    /* 最先禁用SWT0：上电后SWT0默认使能，必须尽早关闭 */
    ((SWT_Type *)IP_SWT_0)->SR = 0xC520U;  /* 解锁序列 第1步 */
    ((SWT_Type *)IP_SWT_0)->SR = 0xD928U;  /* 解锁序列 第2步 */
    ((SWT_Type *)IP_SWT_0)->CR = ((SWT_Type *)IP_SWT_0)->CR & ~SWT_CR_WEN_MASK;  /* 关闭SWT0 */

    /* 注意：不要访问SWT1，其时钟默认未使能，访问会触发HardFault */

    /* Write your code here */
    BOOTLOADER_MAIN_Init(&BSP_init, &AbortTransferMsg);
    for(;;)
    {
        BOOTLOADER_MAIN_Demo();
        SendMsg();
        test_cnt++;
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
