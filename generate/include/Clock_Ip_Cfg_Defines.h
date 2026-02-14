/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32CC
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : 
*
*   Copyright 2020-2021 NXP
*
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Clock_Ip_Cfg_Defines.h
*   @version    3.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/

#ifndef CLOCK_IP_CFG_DEFINES_H
#define CLOCK_IP_CFG_DEFINES_H


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_DEFINES_VENDOR_ID                       43
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define CLOCK_IP_CFG_DEFINES_SW_MAJOR_VERSION                0
#define CLOCK_IP_CFG_DEFINES_SW_MINOR_VERSION                1
#define CLOCK_IP_CFG_DEFINES_SW_PATCH_VERSION                2

/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Platform used.
*/
#define CLOCK_IP_PLATFORM_SPECIFIC

/**
* @brief            Max number of internal oscillators
*/
#define CLOCK_IP_IRCOSCS_COUNT       (0U)

/**
* @brief            Max number of external oscillators
*/
#define CLOCK_IP_XOSCS_COUNT       (0U)

/**
* @brief            Max number of pll devices
*/
#define CLOCK_IP_PLLS_COUNT       (0U)

/**
* @brief            Max number of selectors
*/
#define CLOCK_IP_SELECTORS_COUNT       (0U)

/**
* @brief            Max number of dividers
*/
#define CLOCK_IP_DIVIDERS_COUNT       (0U)

/**
* @brief            Max number of divider triggers
*/
#define CLOCK_IP_DIVIDER_TRIGGERS_COUNT       (0U)

/**
* @brief            Max number of fractional dividers
*/
#define CLOCK_IP_FRACTIONAL_DIVIDERS_COUNT       (0U)

/**
* @brief            Max number of external clocks
*/
#define CLOCK_IP_EXT_CLKS_COUNT       (0U)

/**
* @brief            Max number of pcfs
*/
#define CLOCK_IP_PCFS_COUNT       (0U)

/**
* @brief            Max number of clock gates
*/
#define CLOCK_IP_GATES_COUNT       (0U)

/**
* @brief            Max number of clock monitoring units
*/
#define CLOCK_IP_CMUS_COUNT       (0U)

/**
* @brief            Max number of configured frequencies values
*/
#define CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT       (0U)

/**
* @brief            Max number of specific peripheral (eMIOS) units
*/
#define CLOCK_IP_SPECIFIC_PERIPH_COUNT       (0U)

/**
* @brief            Supported power mode.
*/
#define CLOCK_IP_HAS_RUN_MODE                0U

/**
* @brief            Firc frequency.
*/
#define CLOCK_IP_FIRC_FREQUENCY                48000000U

/**
* @brief            Sirc frequency.
*/
#define CLOCK_IP_SIRC_FREQUENCY                32000U

/**
* @brief            Clock ip supports clock frequency.
*/
#define CLOCK_IP_GET_FREQUENCY_API                (STD_ON)

/**
* @brief            Default fxosc frequency.
*/
#define CLOCK_IP_DEFAULT_FXOSC_FREQUENCY                40000000U

/**
* @brief            Clock ip supports ram wait states.
*/
#define CLOCK_IP_HAS_RAM_WAIT_STATES

/**
* @brief            Supported clocks.
*/
#define CLOCK_IP_HAS_FIRC_CLK         0U
#define CLOCK_IP_HAS_FIRC_MUXED_CLK         1U
#define CLOCK_IP_HAS_FIRC_VLP_CLK         2U
#define CLOCK_IP_HAS_FIRC_STOP_CLK         3U
#define CLOCK_IP_HAS_FIRC_STANDBY_CLK         4U
#define CLOCK_IP_HAS_FRO_CLK         5U
#define CLOCK_IP_HAS_SAFE_CLK         6U
#define CLOCK_IP_HAS_SIRC_CLK         7U
#define CLOCK_IP_HAS_SIRC_VLP_CLK         8U
#define CLOCK_IP_HAS_SIRC_STOP_CLK         9U
#define CLOCK_IP_HAS_SIRC_STANDBY_CLK         10U
#define CLOCK_IP_HAS_SYSTEM_CLK         11U
#define CLOCK_IP_HAS_LPO_128K_CLK         12U
#define CLOCK_IP_HAS_FXOSC_CLK         13U
#define CLOCK_IP_HAS_SXOSC_CLK         14U
#define CLOCK_IP_HAS_SOSC_CLK         15U
#define CLOCK_IP_HAS_ACCELPLL_CLK         16U
#define CLOCK_IP_HAS_COREPLL_CLK         17U
#define CLOCK_IP_HAS_DDRPLL_CLK         18U
#define CLOCK_IP_HAS_PERIPHPLL_CLK         19U
#define CLOCK_IP_HAS_PLL_CLK         20U
#define CLOCK_IP_HAS_PLL0_CLK         21U
#define CLOCK_IP_HAS_PLL1_CLK         22U
#define CLOCK_IP_HAS_SPLL_CLK         23U
#define CLOCK_IP_HAS_ACCEL_PLL_PHI0_CLK         24U
#define CLOCK_IP_HAS_ACCEL_PLL_PHI1_CLK         25U
#define CLOCK_IP_HAS_CORE_PLL_PHI0_CLK         26U
#define CLOCK_IP_HAS_CORE_PLL_PHI1_CLK         27U
#define CLOCK_IP_HAS_CORE_PLL_DFS0_CLK         28U
#define CLOCK_IP_HAS_CORE_PLL_DFS1_CLK         29U
#define CLOCK_IP_HAS_CORE_PLL_DFS2_CLK         30U
#define CLOCK_IP_HAS_CORE_PLL_DFS3_CLK         31U
#define CLOCK_IP_HAS_CORE_PLL_DFS4_CLK         32U
#define CLOCK_IP_HAS_CORE_PLL_DFS5_CLK         33U
#define CLOCK_IP_HAS_CORE_PLL_DFS6_CLK         34U
#define CLOCK_IP_HAS_DDR_PLL_PHI0_CLK         35U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI0_CLK         36U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI1_CLK         37U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI2_CLK         38U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI3_CLK         39U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI4_CLK         40U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI5_CLK         41U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI6_CLK         42U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI7_CLK         43U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS0_CLK         44U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS1_CLK         45U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS2_CLK         46U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS3_CLK         47U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS4_CLK         48U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS5_CLK         49U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS6_CLK         50U
#define CLOCK_IP_HAS_COREPLL_PHI0_CLK         51U
#define CLOCK_IP_HAS_COREPLL_PHI1_CLK         52U
#define CLOCK_IP_HAS_COREPLL_PHI2_CLK         53U
#define CLOCK_IP_HAS_COREPLL_PHI3_CLK         54U
#define CLOCK_IP_HAS_COREPLL_PHI4_CLK         55U
#define CLOCK_IP_HAS_COREPLL_PHI5_CLK         56U
#define CLOCK_IP_HAS_COREPLL_PHI6_CLK         57U
#define CLOCK_IP_HAS_COREPLL_PHI7_CLK         58U
#define CLOCK_IP_HAS_COREPLL_PHI8_CLK         59U
#define CLOCK_IP_HAS_COREPLL_PHI9_CLK         60U
#define CLOCK_IP_HAS_COREPLL_DFS0_CLK         61U
#define CLOCK_IP_HAS_COREPLL_DFS1_CLK         62U
#define CLOCK_IP_HAS_COREPLL_DFS2_CLK         63U
#define CLOCK_IP_HAS_COREPLL_DFS3_CLK         64U
#define CLOCK_IP_HAS_COREPLL_DFS4_CLK         65U
#define CLOCK_IP_HAS_COREPLL_DFS5_CLK         66U
#define CLOCK_IP_HAS_COREPLL_DFS6_CLK         67U
#define CLOCK_IP_HAS_DDRPLL_PHI0_CLK         68U
#define CLOCK_IP_HAS_PERIPHPLL_PHI0_CLK         69U
#define CLOCK_IP_HAS_PERIPHPLL_PHI1_CLK         70U
#define CLOCK_IP_HAS_PERIPHPLL_PHI2_CLK         71U
#define CLOCK_IP_HAS_PERIPHPLL_PHI3_CLK         72U
#define CLOCK_IP_HAS_PERIPHPLL_PHI4_CLK         73U
#define CLOCK_IP_HAS_PERIPHPLL_PHI5_CLK         74U
#define CLOCK_IP_HAS_PERIPHPLL_PHI6_CLK         75U
#define CLOCK_IP_HAS_PERIPHPLL_PHI7_CLK         76U
#define CLOCK_IP_HAS_PERIPHPLL_PHI8_CLK         77U
#define CLOCK_IP_HAS_PERIPHPLL_PHI9_CLK         78U
#define CLOCK_IP_HAS_PERIPHPLL_DFS0_CLK         79U
#define CLOCK_IP_HAS_PERIPHPLL_DFS1_CLK         80U
#define CLOCK_IP_HAS_PERIPHPLL_DFS2_CLK         81U
#define CLOCK_IP_HAS_PERIPHPLL_DFS3_CLK         82U
#define CLOCK_IP_HAS_PERIPHPLL_DFS4_CLK         83U
#define CLOCK_IP_HAS_PERIPHPLL_DFS5_CLK         84U
#define CLOCK_IP_HAS_PERIPHPLL_DFS6_CLK         85U
#define CLOCK_IP_HAS_PLL_PHI0_CLK         86U
#define CLOCK_IP_HAS_PLL_PHI1_CLK         87U
#define CLOCK_IP_HAS_PLL_POSTDIV_CLK         88U
#define CLOCK_IP_HAS_SIRCDIV1_CLK         89U
#define CLOCK_IP_HAS_SIRCDIV2_CLK         90U
#define CLOCK_IP_HAS_FDIV0_CLK         91U
#define CLOCK_IP_HAS_FIRCDIV1_CLK         92U
#define CLOCK_IP_HAS_FIRCDIV2_CLK         93U
#define CLOCK_IP_HAS_SOSCDIV1_CLK         94U
#define CLOCK_IP_HAS_SOSCDIV2_CLK         95U
#define CLOCK_IP_HAS_SPLLDIV1_CLK         96U
#define CLOCK_IP_HAS_SPLLDIV2_CLK         97U
#define CLOCK_IP_HAS_LPO_32K_CLK         98U
#define CLOCK_IP_HAS_LPO_1K_CLK         99U
#define CLOCK_IP_HAS_SERDES_0_LANE_0_TX         100U
#define CLOCK_IP_HAS_SERDES_0_LANE_0_CDR         101U
#define CLOCK_IP_HAS_SERDES_0_LANE_1_TX         102U
#define CLOCK_IP_HAS_SERDES_0_LANE_1_CDR         103U
#define CLOCK_IP_HAS_SERDES_1_LANE_0_TX         104U
#define CLOCK_IP_HAS_SERDES_1_LANE_0_CDR         105U
#define CLOCK_IP_HAS_SERDES_1_LANE_1_TX         106U
#define CLOCK_IP_HAS_SERDES_1_LANE_1_CDR         107U
#define CLOCK_IP_HAS_SERDES_0_XPCS_0_TX         108U
#define CLOCK_IP_HAS_SERDES_0_XPCS_0_CDR         109U
#define CLOCK_IP_HAS_SERDES_0_XPCS_1_TX         110U
#define CLOCK_IP_HAS_SERDES_0_XPCS_1_CDR         111U
#define CLOCK_IP_HAS_SERDES_1_XPCS_0_TX         112U
#define CLOCK_IP_HAS_SERDES_1_XPCS_0_CDR         113U
#define CLOCK_IP_HAS_SERDES_1_XPCS_1_TX         114U
#define CLOCK_IP_HAS_SERDES_1_XPCS_1_CDR         115U
#define CLOCK_IP_HAS_EMAC_MII_RX_CLK         116U
#define CLOCK_IP_HAS_EMAC_MII_RMII_TX_CLK         117U
#define CLOCK_IP_HAS_ETH_RGMII_REF_CLK         118U
#define CLOCK_IP_HAS_ETH_EXT_TS_CLK         119U
#define CLOCK_IP_HAS_ETH0_EXT_RX_CLK         120U
#define CLOCK_IP_HAS_ETH0_EXT_TX_CLK         121U
#define CLOCK_IP_HAS_ETH1_EXT_RX_CLK         122U
#define CLOCK_IP_HAS_ETH1_EXT_TX_CLK         123U
#define CLOCK_IP_HAS_LFAST0_EXT_REF_CLK         124U
#define CLOCK_IP_HAS_LFAST1_EXT_REF_CLK         125U
#define CLOCK_IP_HAS_FTM_0_EXT_REF_CLK         126U
#define CLOCK_IP_HAS_FTM_1_EXT_REF_CLK         127U
#define CLOCK_IP_HAS_GMAC_0_EXT_REF_CLK         128U
#define CLOCK_IP_HAS_GMAC_0_EXT_RX_CLK         129U
#define CLOCK_IP_HAS_GMAC_0_EXT_TX_CLK         130U
#define CLOCK_IP_HAS_GMAC_0_SGMII_REF_CLK         131U
#define CLOCK_IP_HAS_GMAC_0_SGMII_RX_CLK         132U
#define CLOCK_IP_HAS_GMAC_0_SGMII_TX_CLK         133U
#define CLOCK_IP_HAS_GMAC_1_EXT_REF_CLK         134U
#define CLOCK_IP_HAS_GMAC_1_EXT_RX_CLK         135U
#define CLOCK_IP_HAS_GMAC_1_EXT_TX_CLK         136U
#define CLOCK_IP_HAS_GMAC_EXT_TS_CLK         137U
#define CLOCK_IP_HAS_GMAC_0_EXT_TS_CLK         138U
#define CLOCK_IP_HAS_GMAC_1_EXT_TS_CLK         139U
#define CLOCK_IP_HAS_GMAC_1_INT_REF_CLK         140U
#define CLOCK_IP_HAS_PFE_MAC_0_EXT_REF_CLK         141U
#define CLOCK_IP_HAS_PFE_MAC_0_EXT_RX_CLK         142U
#define CLOCK_IP_HAS_PFE_MAC_0_EXT_TX_CLK         143U
#define CLOCK_IP_HAS_PFE_MAC_1_EXT_REF_CLK         144U
#define CLOCK_IP_HAS_PFE_MAC_1_EXT_RX_CLK         145U
#define CLOCK_IP_HAS_PFE_MAC_1_EXT_TX_CLK         146U
#define CLOCK_IP_HAS_PFE_MAC_2_EXT_REF_CLK         147U
#define CLOCK_IP_HAS_PFE_MAC_2_EXT_RX_CLK         148U
#define CLOCK_IP_HAS_PFE_MAC_2_EXT_TX_CLK         149U
#define CLOCK_IP_HAS_TCLK0_REF_CLK         150U
#define CLOCK_IP_HAS_TCLK1_REF_CLK         151U
#define CLOCK_IP_HAS_TCLK2_REF_CLK         152U
#define CLOCK_IP_HAS_TEST_CLK         153U
#define CLOCK_IP_HAS_TPR_CLK         154U
#define CLOCK_IP_HAS_RTC_CLKIN         155U
#define CLOCK_IP_HAS_A53_CORE_CLK         156U
#define CLOCK_IP_HAS_A53_CORE_DIV2_CLK         157U
#define CLOCK_IP_HAS_A53_CORE_DIV10_CLK         158U
#define CLOCK_IP_HAS_AIPS_PLAT_CLK         159U
#define CLOCK_IP_HAS_AIPS_SLOW_CLK         160U
#define CLOCK_IP_HAS_ACCEL3_CLK         161U
#define CLOCK_IP_HAS_ACCEL3_DIV3_CLK         162U
#define CLOCK_IP_HAS_ACCEL4_CLK         163U
#define CLOCK_IP_HAS_CLKOUT_RUN_CLK         164U
#define CLOCK_IP_HAS_DCM_CLK         165U
#define CLOCK_IP_HAS_DDR_CLK         166U
#define CLOCK_IP_HAS_DDR0_CLK         167U
#define CLOCK_IP_HAS_GMAC_REF_DIV_CLK         168U
#define CLOCK_IP_HAS_GMAC0_REF_DIV_CLK         169U
#define CLOCK_IP_HAS_GMAC0_REF_CLK         170U
#define CLOCK_IP_HAS_GMAC1_REF_DIV_CLK         171U
#define CLOCK_IP_HAS_GMAC1_REF_CLK         172U
#define CLOCK_IP_HAS_GMAC1_INT_CLK         173U
#define CLOCK_IP_HAS_HSE_CLK         174U
#define CLOCK_IP_HAS_LBIST_CLK         175U
#define CLOCK_IP_HAS_PFE_PE_CLK         176U
#define CLOCK_IP_HAS_PFE_SYS_CLK         177U
#define CLOCK_IP_HAS_PER_CLK         178U
#define CLOCK_IP_HAS_PFEMAC0_REF_DIV_CLK         179U
#define CLOCK_IP_HAS_PFEMAC1_REF_DIV_CLK         180U
#define CLOCK_IP_HAS_PFEMAC2_REF_DIV_CLK         181U
#define CLOCK_IP_HAS_QSPI_MEM_CLK         182U
#define CLOCK_IP_HAS_SCS_CLK         183U
#define CLOCK_IP_HAS_XBAR_2X_CLK         184U
#define CLOCK_IP_HAS_XBAR_CLK         185U
#define CLOCK_IP_HAS_XBAR_DIV2_CLK         186U
#define CLOCK_IP_HAS_XBAR_DIV3_CLK         187U
#define CLOCK_IP_HAS_XBAR_DIV4_CLK         188U
#define CLOCK_IP_HAS_XBAR_DIV6_CLK         189U
#define CLOCK_IP_HAS_XMII_CLK_125MHZ         190U
#define CLOCK_IP_HAS_XMII_CLK_2M5HZ         191U
#define CLOCK_IP_HAS_XMII_CLK_25MHZ         192U
#define CLOCK_IP_HAS_XMII_CLK_50MHZ         193U
#define CLOCK_IP_HAS_XOSC_CLK         194U
#define CLOCK_IP_HAS_SERDES_REF_CLK         195U
#define CLOCK_IP_HAS_SERDES0_REF_CLK         196U
#define CLOCK_IP_HAS_SERDES1_REF_CLK         197U
#define CLOCK_IP_HAS_SCS_RUN_CLK         198U
#define CLOCK_IP_HAS_SCS_VLPR_CLK         199U
#define CLOCK_IP_HAS_SCS_HSRUN_CLK         200U
#define CLOCK_IP_HAS_CORE_CLK         201U
#define CLOCK_IP_HAS_CM7_CORE_CLK         202U
#define CLOCK_IP_HAS_CORE_RUN_CLK         203U
#define CLOCK_IP_HAS_CORE_VLPR_CLK         204U
#define CLOCK_IP_HAS_CORE_HSRUN_CLK         205U
#define CLOCK_IP_HAS_BUS_CLK         206U
#define CLOCK_IP_HAS_BUS_RUN_CLK         207U
#define CLOCK_IP_HAS_BUS_VLPR_CLK         208U
#define CLOCK_IP_HAS_BUS_HSRUN_CLK         209U
#define CLOCK_IP_HAS_SLOW_CLK         210U
#define CLOCK_IP_HAS_SLOW_RUN_CLK         211U
#define CLOCK_IP_HAS_SLOW_VLPR_CLK         212U
#define CLOCK_IP_HAS_SLOW_HSRUN_CLK         213U
#define CLOCK_IP_HAS_LPO_CLK         214U
#define CLOCK_IP_HAS_SCG_CLKOUT_CLK         215U
#define CLOCK_IP_HAS_FTM0_EXT_CLK         216U
#define CLOCK_IP_HAS_FTM1_EXT_CLK         217U
#define CLOCK_IP_HAS_FTM2_EXT_CLK         218U
#define CLOCK_IP_HAS_FTM3_EXT_CLK         219U
#define CLOCK_IP_HAS_FTM4_EXT_CLK         220U
#define CLOCK_IP_HAS_FTM5_EXT_CLK         221U
#define CLOCK_IP_HAS_FTM6_EXT_CLK         222U
#define CLOCK_IP_HAS_FTM7_EXT_CLK         223U
#define CLOCK_IP_HAS_Px_CLKOUT_SRC_CLK         224U
#define CLOCK_IP_HAS_Px_PSI5_S_UTIL_CLK         225U
#define CLOCK_IP_HAS_SHIFT_LBIST_CLK         226U
#define CLOCK_IP_HAS_P0_SYS_CLK         227U
#define CLOCK_IP_HAS_P1_SYS_CLK         228U
#define CLOCK_IP_HAS_P1_SYS_DIV2_CLK         229U
#define CLOCK_IP_HAS_P1_SYS_DIV4_CLK         230U
#define CLOCK_IP_HAS_P2_SYS_CLK         231U
#define CLOCK_IP_HAS_CORE_M33_CLK         232U
#define CLOCK_IP_HAS_P2_SYS_DIV2_CLK         233U
#define CLOCK_IP_HAS_P2_SYS_DIV4_CLK         234U
#define CLOCK_IP_HAS_P3_SYS_CLK         235U
#define CLOCK_IP_HAS_CE_SYS_DIV2_CLK         236U
#define CLOCK_IP_HAS_CE_SYS_DIV4_CLK         237U
#define CLOCK_IP_HAS_P3_SYS_DIV2_NOC_CLK         238U
#define CLOCK_IP_HAS_P3_SYS_DIV4_CLK         239U
#define CLOCK_IP_HAS_P4_SYS_CLK         240U
#define CLOCK_IP_HAS_P4_SYS_DIV2_CLK         241U
#define CLOCK_IP_HAS_HSE_SYS_DIV2_CLK         242U
#define CLOCK_IP_HAS_P5_SYS_CLK         243U
#define CLOCK_IP_HAS_P5_SYS_DIV2_CLK         244U
#define CLOCK_IP_HAS_P5_SYS_DIV4_CLK         245U
#define CLOCK_IP_HAS_P2_MATH_CLK         246U
#define CLOCK_IP_HAS_P2_MATH_DIV3_CLK         247U
#define CLOCK_IP_HAS_RTU0_CORE_CLK         248U
#define CLOCK_IP_HAS_RTU0_CORE_DIV2_CLK         249U
#define CLOCK_IP_HAS_RTU1_CORE_CLK         250U
#define CLOCK_IP_HAS_RTU1_CORE_DIV2_CLK         251U
#define CLOCK_IP_HAS_P0_PSI5_S_UTIL_CLK         252U
#define CLOCK_IP_HAS_P4_PSI5_S_UTIL_CLK         253U
#define CLOCK_IP_HAS_SYS_CLK         254U
#define CLOCK_IP_HAS_SYS_DIV2_CLK         255U
#define CLOCK_IP_HAS_SYS_DIV4_CLK         256U
#define CLOCK_IP_HAS_SYS_DIV8_CLK         257U
#define CLOCK_IP_HAS_RT_DAPB_CLK         258U
#define CLOCK_IP_HAS_ACCEL_CLK         259U
#define CLOCK_IP_HAS_ACCEL_DIV3_CLK         260U
#define CLOCK_IP_HAS_ACCEL_DIV4_CLK         261U
#define CLOCK_IP_HAS_ACCEL_XBAR_CLK         262U
#define CLOCK_IP_HAS_ACCEL_XBAR_DIV2_CLK         263U
#define CLOCK_IP_HAS_ACCEL_XBAR_DIV4_CLK         264U
#define CLOCK_IP_HAS_ACCEL_XBAR_DIV8_CLK         265U
#define CLOCK_IP_HAS_AP_DAPB_CLK         266U
#define CLOCK_IP_HAS_ACCEL4_LAX0_CLK         267U
#define CLOCK_IP_HAS_ACCEL4_LAX1_CLK         268U
#define CLOCK_IP_HAS_ADC0_CLK         269U
#define CLOCK_IP_HAS_ADC1_CLK         270U
#define CLOCK_IP_HAS_ADC2_CLK         271U
#define CLOCK_IP_HAS_ADC3_CLK         272U
#define CLOCK_IP_HAS_ADC4_CLK         273U
#define CLOCK_IP_HAS_ADC5_CLK         274U
#define CLOCK_IP_HAS_ADC6_CLK         275U
#define CLOCK_IP_HAS_AURORA_TRACE_TEST_CLK         276U
#define CLOCK_IP_HAS_BCTU0_CLK         277U
#define CLOCK_IP_HAS_CE_SYS_DIV2_MON_CLK         278U
#define CLOCK_IP_HAS_CLKOUT_STANDBY_CLK         279U
#define CLOCK_IP_HAS_CLKOUT0_CLK         280U
#define CLOCK_IP_HAS_CLKOUT1_CLK         281U
#define CLOCK_IP_HAS_CLKOUT2_CLK         282U
#define CLOCK_IP_HAS_CLKOUT3_CLK         283U
#define CLOCK_IP_HAS_CLKOUT4_CLK         284U
#define CLOCK_IP_HAS_CLKOUT5_CLK         285U
#define CLOCK_IP_HAS_CMP0_CLK         286U
#define CLOCK_IP_HAS_CMP1_CLK         287U
#define CLOCK_IP_HAS_CMP2_CLK         288U
#define CLOCK_IP_HAS_CMU0_CLK         289U
#define CLOCK_IP_HAS_CMU1_CLK         290U
#define CLOCK_IP_HAS_CORE_A53_CLUSTER_0_CLK         291U
#define CLOCK_IP_HAS_CORE_A53_CLUSTER_1_CLK         292U
#define CLOCK_IP_HAS_CORE_M7_0_CLK         293U
#define CLOCK_IP_HAS_CORE_M7_1_CLK         294U
#define CLOCK_IP_HAS_CORE_M7_2_CLK         295U
#define CLOCK_IP_HAS_CORE_M7_3_CLK         296U
#define CLOCK_IP_HAS_CRC0_CLK         297U
#define CLOCK_IP_HAS_CTU0_CLK         298U
#define CLOCK_IP_HAS_CTU1_CLK         299U
#define CLOCK_IP_HAS_DAPB_CLK         300U
#define CLOCK_IP_HAS_DCM0_CLK         301U
#define CLOCK_IP_HAS_DMA_CRC0_CLK         302U
#define CLOCK_IP_HAS_DMA_CRC1_CLK         303U
#define CLOCK_IP_HAS_DMA0_CLK         304U
#define CLOCK_IP_HAS_DMA1_CLK         305U
#define CLOCK_IP_HAS_DMAMUX0_CLK         306U
#define CLOCK_IP_HAS_DMAMUX1_CLK         307U
#define CLOCK_IP_HAS_DMAMUX2_CLK         308U
#define CLOCK_IP_HAS_DMAMUX3_CLK         309U
#define CLOCK_IP_HAS_EDMA_CLK         310U
#define CLOCK_IP_HAS_EDMA0_CLK         311U
#define CLOCK_IP_HAS_EDMA0_TCD0_CLK         312U
#define CLOCK_IP_HAS_EDMA0_TCD1_CLK         313U
#define CLOCK_IP_HAS_EDMA0_TCD2_CLK         314U
#define CLOCK_IP_HAS_EDMA0_TCD3_CLK         315U
#define CLOCK_IP_HAS_EDMA0_TCD4_CLK         316U
#define CLOCK_IP_HAS_EDMA0_TCD5_CLK         317U
#define CLOCK_IP_HAS_EDMA0_TCD6_CLK         318U
#define CLOCK_IP_HAS_EDMA0_TCD7_CLK         319U
#define CLOCK_IP_HAS_EDMA0_TCD8_CLK         320U
#define CLOCK_IP_HAS_EDMA0_TCD9_CLK         321U
#define CLOCK_IP_HAS_EDMA0_TCD10_CLK         322U
#define CLOCK_IP_HAS_EDMA0_TCD11_CLK         323U
#define CLOCK_IP_HAS_EDMA0_TCD12_CLK         324U
#define CLOCK_IP_HAS_EDMA0_TCD13_CLK         325U
#define CLOCK_IP_HAS_EDMA0_TCD14_CLK         326U
#define CLOCK_IP_HAS_EDMA0_TCD15_CLK         327U
#define CLOCK_IP_HAS_EDMA0_TCD16_CLK         328U
#define CLOCK_IP_HAS_EDMA0_TCD17_CLK         329U
#define CLOCK_IP_HAS_EDMA0_TCD18_CLK         330U
#define CLOCK_IP_HAS_EDMA0_TCD19_CLK         331U
#define CLOCK_IP_HAS_EDMA0_TCD20_CLK         332U
#define CLOCK_IP_HAS_EDMA0_TCD21_CLK         333U
#define CLOCK_IP_HAS_EDMA0_TCD22_CLK         334U
#define CLOCK_IP_HAS_EDMA0_TCD23_CLK         335U
#define CLOCK_IP_HAS_EDMA0_TCD24_CLK         336U
#define CLOCK_IP_HAS_EDMA0_TCD25_CLK         337U
#define CLOCK_IP_HAS_EDMA0_TCD26_CLK         338U
#define CLOCK_IP_HAS_EDMA0_TCD27_CLK         339U
#define CLOCK_IP_HAS_EDMA0_TCD28_CLK         340U
#define CLOCK_IP_HAS_EDMA0_TCD29_CLK         341U
#define CLOCK_IP_HAS_EDMA0_TCD30_CLK         342U
#define CLOCK_IP_HAS_EDMA0_TCD31_CLK         343U
#define CLOCK_IP_HAS_EDMA1_CLK         344U
#define CLOCK_IP_HAS_EDMA3_CLK         345U
#define CLOCK_IP_HAS_EDMA4_CLK         346U
#define CLOCK_IP_HAS_EDMA5_CLK         347U
#define CLOCK_IP_HAS_FDMA0_CLK         348U
#define CLOCK_IP_HAS_ENET_CLK         349U
#define CLOCK_IP_HAS_EIM_CLK         350U
#define CLOCK_IP_HAS_EIM0_CLK         351U
#define CLOCK_IP_HAS_EIM1_CLK         352U
#define CLOCK_IP_HAS_EIM2_CLK         353U
#define CLOCK_IP_HAS_EIM3_CLK         354U
#define CLOCK_IP_HAS_EIM_BBE32DSP_CLK         355U
#define CLOCK_IP_HAS_EIM_LAX0_CLK         356U
#define CLOCK_IP_HAS_EIM_LAX1_CLK         357U
#define CLOCK_IP_HAS_EIM_PER1_CLK         358U
#define CLOCK_IP_HAS_ENET0_CLK         359U
#define CLOCK_IP_HAS_ENET1_CLK         360U
#define CLOCK_IP_HAS_EMAC_RX_CLK         361U
#define CLOCK_IP_HAS_EMAC_TS_CLK         362U
#define CLOCK_IP_HAS_EMAC_TX_CLK         363U
#define CLOCK_IP_HAS_EMAC_TX_RMII_CLK         364U
#define CLOCK_IP_HAS_EMAC0_RX_CLK         365U
#define CLOCK_IP_HAS_EMAC0_TS_CLK         366U
#define CLOCK_IP_HAS_EMAC0_TX_CLK         367U
#define CLOCK_IP_HAS_EMIOS0_CLK         368U
#define CLOCK_IP_HAS_EMIOS1_CLK         369U
#define CLOCK_IP_HAS_EMIOS2_CLK         370U
#define CLOCK_IP_HAS_ERM0_CLK         371U
#define CLOCK_IP_HAS_ERM1_CLK         372U
#define CLOCK_IP_HAS_ERM_CPU0_CLK         373U
#define CLOCK_IP_HAS_ERM_CPU1_CLK         374U
#define CLOCK_IP_HAS_ERM_CPU2_CLK         375U
#define CLOCK_IP_HAS_ERM_EDMA0_CLK         376U
#define CLOCK_IP_HAS_ERM_EDMA1_CLK         377U
#define CLOCK_IP_HAS_ERM_LAX0_CLK         378U
#define CLOCK_IP_HAS_ERM_LAX1_CLK         379U
#define CLOCK_IP_HAS_ERM_PER_CLK         380U
#define CLOCK_IP_HAS_ERM_PER1_CLK         381U
#define CLOCK_IP_HAS_ERM_CLK         382U
#define CLOCK_IP_HAS_EWM0_CLK         383U
#define CLOCK_IP_HAS_FIRC_MON1_CLK         384U
#define CLOCK_IP_HAS_FIRC_MON2_CLK         385U
#define CLOCK_IP_HAS_FLASH0_CLK         386U
#define CLOCK_IP_HAS_CAN_PE_CLK         387U
#define CLOCK_IP_HAS_FLEXCAN_CLK         388U
#define CLOCK_IP_HAS_FLEXCAN0_CLK         389U
#define CLOCK_IP_HAS_FLEXCAN1_CLK         390U
#define CLOCK_IP_HAS_FLEXCAN2_CLK         391U
#define CLOCK_IP_HAS_FLEXCAN3_CLK         392U
#define CLOCK_IP_HAS_FLEXCAN4_CLK         393U
#define CLOCK_IP_HAS_FLEXCAN5_CLK         394U
#define CLOCK_IP_HAS_FLEXCAN6_CLK         395U
#define CLOCK_IP_HAS_FLEXCAN7_CLK         396U
#define CLOCK_IP_HAS_FLEXCAN8_CLK         397U
#define CLOCK_IP_HAS_FLEXCAN9_CLK         398U
#define CLOCK_IP_HAS_FLEXCAN10_CLK         399U
#define CLOCK_IP_HAS_FLEXCAN11_CLK         400U
#define CLOCK_IP_HAS_FLEXCAN12_CLK         401U
#define CLOCK_IP_HAS_FLEXCAN13_CLK         402U
#define CLOCK_IP_HAS_FLEXCAN14_CLK         403U
#define CLOCK_IP_HAS_FLEXCAN15_CLK         404U
#define CLOCK_IP_HAS_FLEXCAN16_CLK         405U
#define CLOCK_IP_HAS_FLEXCAN17_CLK         406U
#define CLOCK_IP_HAS_FLEXCAN18_CLK         407U
#define CLOCK_IP_HAS_FLEXCAN19_CLK         408U
#define CLOCK_IP_HAS_FLEXCAN20_CLK         409U
#define CLOCK_IP_HAS_FLEXCAN21_CLK         410U
#define CLOCK_IP_HAS_FLEXCAN22_CLK         411U
#define CLOCK_IP_HAS_FLEXCAN23_CLK         412U
#define CLOCK_IP_HAS_FLEXCANA_CLK         413U
#define CLOCK_IP_HAS_FLEXCANB_CLK         414U
#define CLOCK_IP_HAS_FlexIO_CLK         415U
#define CLOCK_IP_HAS_FlexIO0_CLK         416U
#define CLOCK_IP_HAS_FLEXIO0_CLK         417U
#define CLOCK_IP_HAS_FLEXRAY_CLK         418U
#define CLOCK_IP_HAS_FLEXTIMERA_CLK         419U
#define CLOCK_IP_HAS_FLEXTIMERB_CLK         420U
#define CLOCK_IP_HAS_FRAY0_CLK         421U
#define CLOCK_IP_HAS_FRAY1_CLK         422U
#define CLOCK_IP_HAS_FTFC_CLK         423U
#define CLOCK_IP_HAS_FTFM_CLK         424U
#define CLOCK_IP_HAS_FTIMER0_CLK         425U
#define CLOCK_IP_HAS_FTIMER1_CLK         426U
#define CLOCK_IP_HAS_FTM0_CLK         427U
#define CLOCK_IP_HAS_FTM1_CLK         428U
#define CLOCK_IP_HAS_FTM2_CLK         429U
#define CLOCK_IP_HAS_FTM3_CLK         430U
#define CLOCK_IP_HAS_FTM4_CLK         431U
#define CLOCK_IP_HAS_FTM5_CLK         432U
#define CLOCK_IP_HAS_FTM6_CLK         433U
#define CLOCK_IP_HAS_FTM7_CLK         434U
#define CLOCK_IP_HAS_GLB_LBIST_CLK         435U
#define CLOCK_IP_HAS_GMAC_TS_CLK         436U
#define CLOCK_IP_HAS_GMAC0_RX_CLK         437U
#define CLOCK_IP_HAS_GMAC0_TX_CLK         438U
#define CLOCK_IP_HAS_GMAC0_TS_CLK         439U
#define CLOCK_IP_HAS_GMAC1_RX_CLK         440U
#define CLOCK_IP_HAS_GMAC1_TX_CLK         441U
#define CLOCK_IP_HAS_GMAC1_TS_CLK         442U
#define CLOCK_IP_HAS_GPIO0_CLK         443U
#define CLOCK_IP_HAS_IDIV0_CLK         444U
#define CLOCK_IP_HAS_IDIV1_CLK         445U
#define CLOCK_IP_HAS_IDIV2_CLK         446U
#define CLOCK_IP_HAS_IDIV3_CLK         447U
#define CLOCK_IP_HAS_IDIV4_CLK         448U
#define CLOCK_IP_HAS_I3C0_CLK         449U
#define CLOCK_IP_HAS_I3C1_CLK         450U
#define CLOCK_IP_HAS_IIIC0_CLK         451U
#define CLOCK_IP_HAS_IIIC1_CLK         452U
#define CLOCK_IP_HAS_IIIC2_CLK         453U
#define CLOCK_IP_HAS_IIC0_CLK         454U
#define CLOCK_IP_HAS_IIC1_CLK         455U
#define CLOCK_IP_HAS_IIC2_CLK         456U
#define CLOCK_IP_HAS_IIC3_CLK         457U
#define CLOCK_IP_HAS_IIC4_CLK         458U
#define CLOCK_IP_HAS_INTM_CLK         459U
#define CLOCK_IP_HAS_ISO_CLK         460U
#define CLOCK_IP_HAS_LBIST0_CLK         461U
#define CLOCK_IP_HAS_LBIST1_CLK         462U
#define CLOCK_IP_HAS_LBIST2_CLK         463U
#define CLOCK_IP_HAS_LBIST3_CLK         464U
#define CLOCK_IP_HAS_LBIST4_CLK         465U
#define CLOCK_IP_HAS_LBIST5_CLK         466U
#define CLOCK_IP_HAS_LBIST6_CLK         467U
#define CLOCK_IP_HAS_LBIST7_CLK         468U
#define CLOCK_IP_HAS_LCU0_CLK         469U
#define CLOCK_IP_HAS_LCU1_CLK         470U
#define CLOCK_IP_HAS_LIN_BAUD_CLK         471U
#define CLOCK_IP_HAS_LINFLEXD_CLK         472U
#define CLOCK_IP_HAS_LIN0_CLK         473U
#define CLOCK_IP_HAS_LIN1_CLK         474U
#define CLOCK_IP_HAS_LIN2_CLK         475U
#define CLOCK_IP_HAS_LIN3_CLK         476U
#define CLOCK_IP_HAS_LIN4_CLK         477U
#define CLOCK_IP_HAS_LIN5_CLK         478U
#define CLOCK_IP_HAS_LIN6_CLK         479U
#define CLOCK_IP_HAS_LIN7_CLK         480U
#define CLOCK_IP_HAS_LIN8_CLK         481U
#define CLOCK_IP_HAS_LIN9_CLK         482U
#define CLOCK_IP_HAS_LIN10_CLK         483U
#define CLOCK_IP_HAS_LIN11_CLK         484U
#define CLOCK_IP_HAS_LFAST_REF_CLK         485U
#define CLOCK_IP_HAS_LFAST_REF_EXT_CLK         486U
#define CLOCK_IP_HAS_LPI2C0_CLK         487U
#define CLOCK_IP_HAS_LPI2C1_CLK         488U
#define CLOCK_IP_HAS_LPIT0_CLK         489U
#define CLOCK_IP_HAS_LPSPI_CLK         490U
#define CLOCK_IP_HAS_LPSPI0_CLK         491U
#define CLOCK_IP_HAS_LPSPI1_CLK         492U
#define CLOCK_IP_HAS_LPSPI2_CLK         493U
#define CLOCK_IP_HAS_LPSPI3_CLK         494U
#define CLOCK_IP_HAS_LPSPI4_CLK         495U
#define CLOCK_IP_HAS_LPSPI5_CLK         496U
#define CLOCK_IP_HAS_LPTMR0_CLK         497U
#define CLOCK_IP_HAS_LPUART0_CLK         498U
#define CLOCK_IP_HAS_LPUART1_CLK         499U
#define CLOCK_IP_HAS_LPUART2_CLK         500U
#define CLOCK_IP_HAS_LPUART3_CLK         501U
#define CLOCK_IP_HAS_LPUART4_CLK         502U
#define CLOCK_IP_HAS_LPUART5_CLK         503U
#define CLOCK_IP_HAS_LPUART6_CLK         504U
#define CLOCK_IP_HAS_LPUART7_CLK         505U
#define CLOCK_IP_HAS_LPUART8_CLK         506U
#define CLOCK_IP_HAS_LPUART9_CLK         507U
#define CLOCK_IP_HAS_LPUART10_CLK         508U
#define CLOCK_IP_HAS_LPUART11_CLK         509U
#define CLOCK_IP_HAS_LPUART12_CLK         510U
#define CLOCK_IP_HAS_LPUART13_CLK         511U
#define CLOCK_IP_HAS_LPUART14_CLK         512U
#define CLOCK_IP_HAS_LPUART15_CLK         513U
#define CLOCK_IP_HAS_LVDS_CLK         514U
#define CLOCK_IP_HAS_MCSS_CLK         515U
#define CLOCK_IP_HAS_MPU0_CLK         516U
#define CLOCK_IP_HAS_MSCM_CLK         517U
#define CLOCK_IP_HAS_MSCM0_CLK         518U
#define CLOCK_IP_HAS_MUA_CLK         519U
#define CLOCK_IP_HAS_MUB_CLK         520U
#define CLOCK_IP_HAS_OCOTP0_CLK         521U
#define CLOCK_IP_HAS_PDB0_CLK         522U
#define CLOCK_IP_HAS_PDB1_CLK         523U
#define CLOCK_IP_HAS_PFEMAC0_RX_CLK         524U
#define CLOCK_IP_HAS_PFEMAC0_TX_DIV_CLK         525U
#define CLOCK_IP_HAS_PFEMAC0_TX_CLK         526U
#define CLOCK_IP_HAS_PFEMAC1_RX_CLK         527U
#define CLOCK_IP_HAS_PFEMAC1_TX_CLK         528U
#define CLOCK_IP_HAS_PFEMAC2_RX_CLK         529U
#define CLOCK_IP_HAS_PFEMAC2_TX_CLK         530U
#define CLOCK_IP_HAS_PIT0_CLK         531U
#define CLOCK_IP_HAS_PIT1_CLK         532U
#define CLOCK_IP_HAS_PIT2_CLK         533U
#define CLOCK_IP_HAS_PIT3_CLK         534U
#define CLOCK_IP_HAS_PIT4_CLK         535U
#define CLOCK_IP_HAS_PIT5_CLK         536U
#define CLOCK_IP_HAS_PORTA_CLK         537U
#define CLOCK_IP_HAS_PORTB_CLK         538U
#define CLOCK_IP_HAS_PORTC_CLK         539U
#define CLOCK_IP_HAS_PORTD_CLK         540U
#define CLOCK_IP_HAS_PORTE_CLK         541U
#define CLOCK_IP_HAS_PSI5_0_CLK         542U
#define CLOCK_IP_HAS_PSI5_1_CLK         543U
#define CLOCK_IP_HAS_PSI5S_0_CLK         544U
#define CLOCK_IP_HAS_PSI5S_1_CLK         545U
#define CLOCK_IP_HAS_QSPI_CLK         546U
#define CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK         547U
#define CLOCK_IP_HAS_QSPI_SFIF_CLK         548U
#define CLOCK_IP_HAS_QSPI_2xSFIF_CLK         549U
#define CLOCK_IP_HAS_QSPI_2XSFIF_CLK         550U
#define CLOCK_IP_HAS_QSPI_2X_CLK         551U
#define CLOCK_IP_HAS_QSPI_1X_CLK         552U
#define CLOCK_IP_HAS_QSPI_SFCK_CLK         553U
#define CLOCK_IP_HAS_QSPI0_CLK         554U
#define CLOCK_IP_HAS_QSPI0_RAM_CLK         555U
#define CLOCK_IP_HAS_QSPI0_SFCK_CLK         556U
#define CLOCK_IP_HAS_QSPI0_TX_MEM_CLK         557U
#define CLOCK_IP_HAS_QSPI1_CLK         558U
#define CLOCK_IP_HAS_P0_CLKOUT_SRC_CLK         559U
#define CLOCK_IP_HAS_P0_CTU_PER_CLK         560U
#define CLOCK_IP_HAS_P0_DSPI_CLK         561U
#define CLOCK_IP_HAS_P0_DSPI_MSC_CLK         562U
#define CLOCK_IP_HAS_P0_EMIOS_LCU_CLK         563U
#define CLOCK_IP_HAS_P0_FR_PE_CLK         564U
#define CLOCK_IP_HAS_P0_GTM_CLK         565U
#define CLOCK_IP_HAS_P0_GTM_NOC_CLK         566U
#define CLOCK_IP_HAS_P0_GTM_TS_CLK         567U
#define CLOCK_IP_HAS_P0_LIN_BAUD_CLK         568U
#define CLOCK_IP_HAS_P0_LIN_CLK         569U
#define CLOCK_IP_HAS_P0_NANO_CLK         570U
#define CLOCK_IP_HAS_P0_PSI5_125K_CLK         571U
#define CLOCK_IP_HAS_P0_PSI5_189K_CLK         572U
#define CLOCK_IP_HAS_P0_PSI5_1US_CLK         573U
#define CLOCK_IP_HAS_P0_PSI5_S_BAUD_CLK         574U
#define CLOCK_IP_HAS_P0_PSI5_S_CORE_CLK         575U
#define CLOCK_IP_HAS_P0_PSI5_S_TRIG0_CLK         576U
#define CLOCK_IP_HAS_P0_PSI5_S_TRIG1_CLK         577U
#define CLOCK_IP_HAS_P0_PSI5_S_TRIG2_CLK         578U
#define CLOCK_IP_HAS_P0_PSI5_S_TRIG3_CLK         579U
#define CLOCK_IP_HAS_P0_PSI5_S_UART_CLK         580U
#define CLOCK_IP_HAS_P0_PSI5_S_WDOG0_CLK         581U
#define CLOCK_IP_HAS_P0_PSI5_S_WDOG1_CLK         582U
#define CLOCK_IP_HAS_P0_PSI5_S_WDOG2_CLK         583U
#define CLOCK_IP_HAS_P0_PSI5_S_WDOG3_CLK         584U
#define CLOCK_IP_HAS_P0_REG_INTF_2X_CLK         585U
#define CLOCK_IP_HAS_P0_REG_INTF_CLK         586U
#define CLOCK_IP_HAS_P1_CLKOUT_SRC_CLK         587U
#define CLOCK_IP_HAS_P1_DSPI_CLK         588U
#define CLOCK_IP_HAS_P1_DSPI60_CLK         589U
#define CLOCK_IP_HAS_P1_LFAST0_REF_CLK         590U
#define CLOCK_IP_HAS_P1_LFAST1_REF_CLK         591U
#define CLOCK_IP_HAS_P1_LFAST_DFT_CLK         592U
#define CLOCK_IP_HAS_P1_NETC_AXI_CLK         593U
#define CLOCK_IP_HAS_P1_LIN_BAUD_CLK         594U
#define CLOCK_IP_HAS_P1_LIN_CLK         595U
#define CLOCK_IP_HAS_ETH_TS_CLK         596U
#define CLOCK_IP_HAS_ETH_TS_DIV4_CLK         597U
#define CLOCK_IP_HAS_ETH0_REF_RMII_CLK         598U
#define CLOCK_IP_HAS_ETH0_RX_MII_CLK         599U
#define CLOCK_IP_HAS_ETH0_RX_RGMII_CLK         600U
#define CLOCK_IP_HAS_ETH0_TX_MII_CLK         601U
#define CLOCK_IP_HAS_ETH0_TX_RGMII_CLK         602U
#define CLOCK_IP_HAS_ETH0_TX_RGMII_LPBK_CLK         603U
#define CLOCK_IP_HAS_ETH1_REF_RMII_CLK         604U
#define CLOCK_IP_HAS_ETH1_RX_MII_CLK         605U
#define CLOCK_IP_HAS_ETH1_RX_RGMII_CLK         606U
#define CLOCK_IP_HAS_ETH1_TX_MII_CLK         607U
#define CLOCK_IP_HAS_ETH1_TX_RGMII_CLK         608U
#define CLOCK_IP_HAS_ETH1_TX_RGMII_LPBK_CLK         609U
#define CLOCK_IP_HAS_P1_REG_INTF_CLK         610U
#define CLOCK_IP_HAS_P2_DBG_ATB_CLK         611U
#define CLOCK_IP_HAS_P2_REG_INTF_CLK         612U
#define CLOCK_IP_HAS_P3_AES_CLK         613U
#define CLOCK_IP_HAS_P3_CAN_PE_CLK         614U
#define CLOCK_IP_HAS_P3_CLKOUT_SRC_CLK         615U
#define CLOCK_IP_HAS_P3_DBG_TS_CLK         616U
#define CLOCK_IP_HAS_P3_REG_INTF_CLK         617U
#define CLOCK_IP_HAS_P3_SYS_MON1_CLK         618U
#define CLOCK_IP_HAS_P3_SYS_MON2_CLK         619U
#define CLOCK_IP_HAS_P3_SYS_MON3_CLK         620U
#define CLOCK_IP_HAS_P4_CLKOUT_SRC_CLK         621U
#define CLOCK_IP_HAS_P4_DSPI_CLK         622U
#define CLOCK_IP_HAS_P4_DSPI60_CLK         623U
#define CLOCK_IP_HAS_P4_EMIOS_LCU_CLK         624U
#define CLOCK_IP_HAS_P4_LIN_BAUD_CLK         625U
#define CLOCK_IP_HAS_P4_LIN_CLK         626U
#define CLOCK_IP_HAS_P4_PSI5_125K_CLK         627U
#define CLOCK_IP_HAS_P4_PSI5_189K_CLK         628U
#define CLOCK_IP_HAS_P4_PSI5_1US_CLK         629U
#define CLOCK_IP_HAS_P4_PSI5_S_BAUD_CLK         630U
#define CLOCK_IP_HAS_P4_PSI5_S_CORE_CLK         631U
#define CLOCK_IP_HAS_P4_PSI5_S_TRIG0_CLK         632U
#define CLOCK_IP_HAS_P4_PSI5_S_TRIG1_CLK         633U
#define CLOCK_IP_HAS_P4_PSI5_S_TRIG2_CLK         634U
#define CLOCK_IP_HAS_P4_PSI5_S_TRIG3_CLK         635U
#define CLOCK_IP_HAS_P4_PSI5_S_UART_CLK         636U
#define CLOCK_IP_HAS_P4_PSI5_S_WDOG0_CLK         637U
#define CLOCK_IP_HAS_P4_PSI5_S_WDOG1_CLK         638U
#define CLOCK_IP_HAS_P4_PSI5_S_WDOG2_CLK         639U
#define CLOCK_IP_HAS_P4_PSI5_S_WDOG3_CLK         640U
#define CLOCK_IP_HAS_P4_QSPI0_2X_CLK         641U
#define CLOCK_IP_HAS_P4_QSPI0_1X_CLK         642U
#define CLOCK_IP_HAS_P4_QSPI1_2X_CLK         643U
#define CLOCK_IP_HAS_P4_QSPI1_1X_CLK         644U
#define CLOCK_IP_HAS_P4_REG_INTF_2X_CLK         645U
#define CLOCK_IP_HAS_P4_REG_INTF_CLK         646U
#define CLOCK_IP_HAS_P4_SDHC_CLK         647U
#define CLOCK_IP_HAS_P4_SDHC_IP_CLK         648U
#define CLOCK_IP_HAS_P4_SDHC_IP_DIV2_CLK         649U
#define CLOCK_IP_HAS_P5_AE_CLK         650U
#define CLOCK_IP_HAS_P5_CANXL_PE_CLK         651U
#define CLOCK_IP_HAS_P5_CLKOUT_SRC_CLK         652U
#define CLOCK_IP_HAS_P5_DSPI_CLK         653U
#define CLOCK_IP_HAS_P5_DIPORT_CLK         654U
#define CLOCK_IP_HAS_P5_LIN_BAUD_CLK         655U
#define CLOCK_IP_HAS_P5_LIN_CLK         656U
#define CLOCK_IP_HAS_P5_REG_INTF_CLK         657U
#define CLOCK_IP_HAS_P6_REG_INTF_CLK         658U
#define CLOCK_IP_HAS_RTU0_REG_INTF_CLK         659U
#define CLOCK_IP_HAS_RTU0_CORE_MON_CLK         660U
#define CLOCK_IP_HAS_RTU0_CORE_DIV2_MON1_CLK         661U
#define CLOCK_IP_HAS_RTU0_CORE_DIV2_MON2_CLK         662U
#define CLOCK_IP_HAS_RTU0_CORE_DIV2_MON3_CLK         663U
#define CLOCK_IP_HAS_RTU0_CORE_DIV2_MON4_CLK         664U
#define CLOCK_IP_HAS_RTU1_REG_INTF_CLK         665U
#define CLOCK_IP_HAS_RTU1_CORE_MON_CLK         666U
#define CLOCK_IP_HAS_RTU1_CORE_DIV2_MON1_CLK         667U
#define CLOCK_IP_HAS_RTU1_CORE_DIV2_MON2_CLK         668U
#define CLOCK_IP_HAS_RTU1_CORE_DIV2_MON3_CLK         669U
#define CLOCK_IP_HAS_RTU1_CORE_DIV2_MON4_CLK         670U
#define CLOCK_IP_HAS_RFE_PLL_CLK         671U
#define CLOCK_IP_HAS_RTC_CLK         672U
#define CLOCK_IP_HAS_RTC0_CLK         673U
#define CLOCK_IP_HAS_RTC_EXT_REF_CLK         674U
#define CLOCK_IP_HAS_SAI0_CLK         675U
#define CLOCK_IP_HAS_SAI1_CLK         676U
#define CLOCK_IP_HAS_SDHC0_CLK         677U
#define CLOCK_IP_HAS_SEMA42_CLK         678U
#define CLOCK_IP_HAS_SIPI0_CLK         679U
#define CLOCK_IP_HAS_SIPI1_CLK         680U
#define CLOCK_IP_HAS_SIUL0_CLK         681U
#define CLOCK_IP_HAS_SIUL1_CLK         682U
#define CLOCK_IP_HAS_SIUL2_0_CLK         683U
#define CLOCK_IP_HAS_SIUL2_1_CLK         684U
#define CLOCK_IP_HAS_SIUL2_4_CLK         685U
#define CLOCK_IP_HAS_SIUL2_5_CLK         686U
#define CLOCK_IP_HAS_SPI_CLK         687U
#define CLOCK_IP_HAS_SPI0_CLK         688U
#define CLOCK_IP_HAS_SPI1_CLK         689U
#define CLOCK_IP_HAS_SPI2_CLK         690U
#define CLOCK_IP_HAS_SPI3_CLK         691U
#define CLOCK_IP_HAS_SPI4_CLK         692U
#define CLOCK_IP_HAS_SPI5_CLK         693U
#define CLOCK_IP_HAS_SPI6_CLK         694U
#define CLOCK_IP_HAS_SPI7_CLK         695U
#define CLOCK_IP_HAS_SPI8_CLK         696U
#define CLOCK_IP_HAS_SPI9_CLK         697U
#define CLOCK_IP_HAS_SRX0_CLK         698U
#define CLOCK_IP_HAS_SRX1_CLK         699U
#define CLOCK_IP_HAS_STCU0_CLK         700U
#define CLOCK_IP_HAS_STM0_CLK         701U
#define CLOCK_IP_HAS_STM1_CLK         702U
#define CLOCK_IP_HAS_STM2_CLK         703U
#define CLOCK_IP_HAS_STM3_CLK         704U
#define CLOCK_IP_HAS_STM4_CLK         705U
#define CLOCK_IP_HAS_STM5_CLK         706U
#define CLOCK_IP_HAS_STM6_CLK         707U
#define CLOCK_IP_HAS_STM7_CLK         708U
#define CLOCK_IP_HAS_STMA_CLK         709U
#define CLOCK_IP_HAS_STMB_CLK         710U
#define CLOCK_IP_HAS_STMC_CLK         711U
#define CLOCK_IP_HAS_SWG_CLK         712U
#define CLOCK_IP_HAS_SWG_PAD_CLK         713U
#define CLOCK_IP_HAS_SWT0_CLK         714U
#define CLOCK_IP_HAS_SWT1_CLK         715U
#define CLOCK_IP_HAS_SWT2_CLK         716U
#define CLOCK_IP_HAS_SWT3_CLK         717U
#define CLOCK_IP_HAS_SWT4_CLK         718U
#define CLOCK_IP_HAS_SWT5_CLK         719U
#define CLOCK_IP_HAS_SWT6_CLK         720U
#define CLOCK_IP_HAS_TCM_CM7_0_CLK         721U
#define CLOCK_IP_HAS_TCM_CM7_1_CLK         722U
#define CLOCK_IP_HAS_TEMPSENSE_CLK         723U
#define CLOCK_IP_HAS_TIMER_CLK         724U
#define CLOCK_IP_HAS_ENET0_TIME_CLK         725U
#define CLOCK_IP_HAS_TRACE_CLK         726U
#define CLOCK_IP_HAS_TRGMUX0_CLK         727U
#define CLOCK_IP_HAS_TSENSE0_CLK         728U
#define CLOCK_IP_HAS_SDHC_CLK         729U
#define CLOCK_IP_HAS_USDHC_CLK         730U
#define CLOCK_IP_HAS_USDHC0_CLK         731U
#define CLOCK_IP_HAS_WKPU0_CLK         732U
#define CLOCK_IP_HAS_XBAR_DIV3_FAIL_CLK         733U
#define CLOCK_IP_HAS_XBAR_MIPICSI201_CLK         734U
#define CLOCK_IP_HAS_XBAR_MIPICSI223_CLK         735U
#define CLOCK_IP_HAS_BBE32EP_DSP_CLK         736U
#define CLOCK_IP_HAS_CAN_CHI_CLK         737U
#define CLOCK_IP_HAS_CAN_TS_CLK         738U
#define CLOCK_IP_HAS_CAN0_CLK         739U
#define CLOCK_IP_HAS_CAN1_CLK         740U
#define CLOCK_IP_HAS_CRC_CLK         741U
#define CLOCK_IP_HAS_CSI_CFG_CLK         742U
#define CLOCK_IP_HAS_CSI_CFG_CLK         743U
#define CLOCK_IP_HAS_CSI_IPS_CLK         744U
#define CLOCK_IP_HAS_CSI_TXCLK_CLK         745U
#define CLOCK_IP_HAS_CTE_CLK         746U
#define CLOCK_IP_HAS_CTU_CLK         747U
#define CLOCK_IP_HAS_CTU_IPS_CLK         748U
#define CLOCK_IP_HAS_DMA_CLK         749U
#define CLOCK_IP_HAS_DMA_CRC_CLK         750U
#define CLOCK_IP_HAS_DMA_TCD_CLK         751U
#define CLOCK_IP_HAS_EIM_AP1_CLK         752U
#define CLOCK_IP_HAS_EIM_CM70_CLK         753U
#define CLOCK_IP_HAS_EIM_CM71_CLK         754U
#define CLOCK_IP_HAS_EIM_DSP_CLK         755U
#define CLOCK_IP_HAS_EIM_RT0_CLK         756U
#define CLOCK_IP_HAS_EIM_RT2_CLK         757U
#define CLOCK_IP_HAS_ERM_AP1_CLK         758U
#define CLOCK_IP_HAS_ERM_RT0_CLK         759U
#define CLOCK_IP_HAS_ERM_RT1_CLK         760U
#define CLOCK_IP_HAS_ERM_RT2_CLK         761U
#define CLOCK_IP_HAS_FCCU_IPS_CLK         762U
#define CLOCK_IP_HAS_SYS_M7_0_CLK         763U
#define CLOCK_IP_HAS_SYS_M7_1_CLK         764U
#define CLOCK_IP_HAS_SYS_HSE_CLK         765U
#define CLOCK_IP_HAS_MC_CLK         766U
#define CLOCK_IP_HAS_MIPICSI2_0_CLK         767U
#define CLOCK_IP_HAS_MIPICSI2_1_CLK         768U
#define CLOCK_IP_HAS_NOC_TRACE_CLK         769U
#define CLOCK_IP_HAS_SAR_ADC_CLK         770U
#define CLOCK_IP_HAS_SEMA42_1_CLK         771U
#define CLOCK_IP_HAS_SIUL2_CLK         772U
#define CLOCK_IP_HAS_SPT_CLK         773U
#define CLOCK_IP_HAS_SRAM_CLK         774U
#define CLOCK_IP_HAS_STCU_CLK         775U
#define CLOCK_IP_HAS_TMU_CLK         776U
#define CLOCK_IP_HAS_WKPU_CLK         777U
#define CLOCK_IP_HAS_XRDC0_CLK         778U
#define CLOCK_IP_HAS_XRDC1_CLK         779U
#define CLOCK_IP_HAS_TCLK_CLK         780U
#define CLOCK_IP_HAS_TCK_CLK         781U
#define CLOCK_IP_HAS_DSPI_SCK_TST_CLK         782U
#define CLOCK_IP_FEATURE_PRODUCERS_NO         1U
#define CLOCK_IP_FEATURE_NAMES_NO         783U

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

#endif /* #ifndef CLOCK_IP_CFG_DEFINES_H */

/** @} */

