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
*   @file       Clock_Ip_Cfg.c
*   @version    3.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_VENDOR_ID_C                      43
#define CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_CFG_SW_MAJOR_VERSION_C               0
#define CLOCK_IP_CFG_SW_MINOR_VERSION_C               1
#define CLOCK_IP_CFG_SW_PATCH_VERSION_C               2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and StandardTypes.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and StandardTypes.h are different"
#endif
#endif    /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/* Check if source file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Cfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"


/* *************************************************************************
 * Configuration structure for Clock Configuration 
 * ************************************************************************* */
const Clock_Ip_ClockConfigType Clock_Ip_aClockConfig[1] = {

    /*! @brief User Configuration structure clock_Cfg_0 */
    {
        0U,                          /* clkConfigId */

        0U,                       /* ircoscsCount */
        0U,                       /* xoscsCount */
        0U,                       /* pllsCount */
        0U,                       /* selectorsCount */
        0U,                       /* dividersCount */
        0U,                       /* dividerTriggersCount */
        0U,                       /* fracDivsCount */
        0U,                       /* extClksCount */
        0U,                       /* gatesCount */
        0U,                       /* pcfsCount */
        0U,                       /* cmusCount */
        0U,                       /* configureFrequenciesCount */


        /* IRCOSC initialization. */
        {
            #if CLOCK_IP_IRCOSCS_NO > 0U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

            #if CLOCK_IP_IRCOSCS_NO > 1U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

            #if CLOCK_IP_IRCOSCS_NO > 2U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

            #if CLOCK_IP_IRCOSCS_NO > 3U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

            #if CLOCK_IP_IRCOSCS_NO > 4U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

        },

        /* XOSC initialization. */
        {
            #if CLOCK_IP_XOSCS_NO > 0U
            {
                RESERVED_CLK,           /* Clock name associated to xosc */
                0U,                     /* External oscillator frequency. */
                0U,                     /* Enable xosc. */
                0U,                     /* Startup stabilization time. */
                0U,                     /* XOSC bypass option */
                0U,                     /* Comparator enable */
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
            #if CLOCK_IP_XOSCS_NO > 1U
            {
                RESERVED_CLK,           /* Clock name associated to xosc */
                0U,                     /* External oscillator frequency. */
                0U,                     /* Enable xosc. */
                0U,                     /* Startup stabilization time. */
                0U,                     /* XOSC bypass option */
                0U,                     /* Comparator enable */
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
            #if CLOCK_IP_XOSCS_NO > 2U
            {
                RESERVED_CLK,           /* Clock name associated to xosc */
                0U,                     /* External oscillator frequency. */
                0U,                     /* Enable xosc. */
                0U,                     /* Startup stabilization time. */
                0U,                     /* XOSC bypass option */
                0U,                     /* Comparator enable */
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
            #if CLOCK_IP_XOSCS_NO > 3U
            {
                RESERVED_CLK,           /* Clock name associated to xosc */
                0U,                     /* External oscillator frequency. */
                0U,                     /* Enable xosc. */
                0U,                     /* Startup stabilization time. */
                0U,                     /* XOSC bypass option */
                0U,                     /* Comparator enable */
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
            #if CLOCK_IP_XOSCS_NO > 4U
            {
                RESERVED_CLK,           /* Clock name associated to xosc */
                0U,                     /* External oscillator frequency. */
                0U,                     /* Enable xosc. */
                0U,                     /* Startup stabilization time. */
                0U,                     /* XOSC bypass option */
                0U,                     /* Comparator enable */
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
        },

        /* PLL initialization. */
        {
        #if CLOCK_IP_PLLS_NO > 0U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 1U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 2U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 3U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 4U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 5U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 6U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 7U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 8U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        #if CLOCK_IP_PLLS_NO > 9U
        {
            RESERVED_CLK,           /* name */
            0U,                     /* enable */
            RESERVED_CLK,           /* inputReference */
            0U,                     /* Bypass */
            0U,                     /* predivider */
            0U,                     /* numeratorFracLoopDiv */
            0U,                     /* mulFactorDiv */
            0U,                     /* modulation */
            0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
            0U,                     /* modulationPeriod */
            0U,                     /* incrementStep */
            0U,                     /* sigmaDelta */
            0U,                     /* ditherControl */
            0U,                     /* ditherControlValue */
            0U,                     /* Monitor type */
            {                       /* Dividers */
                0U,
                0U,
                0U,
            },
        },
        #endif
        },

        /* SELECTOR initialization. */
        {
            #if CLOCK_IP_SELECTORS_NO > 0U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 1U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 2U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 3U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 4U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 5U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 6U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 7U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 8U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 9U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 10U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 11U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 12U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 13U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 14U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 15U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 16U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 17U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 18U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 19U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 20U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 21U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 22U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 23U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 24U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 25U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 26U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 27U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 28U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 29U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 30U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 31U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 32U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 33U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 34U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 35U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 36U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 37U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 38U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 39U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 40U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 41U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 42U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 43U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 44U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 45U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 46U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 47U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 48U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
            #if CLOCK_IP_SELECTORS_NO > 49U
            {
                RESERVED_CLK,             /* Clock name associated to selector */
                RESERVED_CLK,             /* Name of the selected input source */
            },
            #endif
        },

        /* DIVIDER initialization. */
        {
            #if CLOCK_IP_DIVIDERS_NO > 0U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 1U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 2U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 3U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 4U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 5U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 6U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 7U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 8U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 9U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 10U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 11U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 12U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 13U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 14U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 15U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 16U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 17U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 18U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 19U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 20U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 21U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 22U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 23U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 24U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 25U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 26U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 27U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 28U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 29U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 30U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 31U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 32U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 33U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 34U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 35U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 36U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 37U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 38U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 39U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 40U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 41U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 42U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 43U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 44U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 45U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 46U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 47U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 48U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_DIVIDERS_NO > 49U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
            #endif
        },

        /* TRIGGER DIVIDER Initialization. */
        {
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 0U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 1U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 2U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 3U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 4U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 5U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 6U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 7U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 8U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 9U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 10U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 11U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 12U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 13U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 14U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 15U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 16U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 17U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 18U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 19U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
        },

        /* FRACTIONAL DIVIDER initialization. */
        {
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 0U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 1U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 2U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 3U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 4U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 5U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 6U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 7U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 8U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 9U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 10U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 11U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 12U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 13U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 14U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 15U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 16U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 17U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 18U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
            #if CLOCK_IP_FRACTIONAL_DIVIDERS_NO > 19U
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
            #endif
        },

        /* EXTERNAL CLOCKS initialization. */
        {

            #if CLOCK_IP_EXT_CLKS_NO > 0U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 1U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 2U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 3U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 4U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 5U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 6U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 7U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 8U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 9U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 10U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 11U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 12U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 13U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 14U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 15U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 16U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 17U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 18U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 19U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 20U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 21U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 22U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 23U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 24U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 25U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 26U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 27U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 28U
            {
                RESERVED_CLK,
                0U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 29U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
        },

        /* PERIPHERAL CLOCK GATES initialization. */
        {

            #if CLOCK_IP_GATES_NO > 0U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 1U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 2U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 3U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 4U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 5U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 6U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 7U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 8U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 9U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 10U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 11U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 12U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 13U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 14U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 15U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 16U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 17U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 18U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 19U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 20U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 21U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 22U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 23U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 24U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 25U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 26U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 27U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 28U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 29U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 30U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 31U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 32U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 33U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 34U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 35U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 36U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 37U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 38U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 39U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 40U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 41U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 42U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 43U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 44U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 45U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 46U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 47U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 48U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 49U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 50U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 51U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 52U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 53U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 54U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 55U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 56U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 57U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 58U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 59U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 60U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 61U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 62U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 63U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 64U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 65U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 66U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 67U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 68U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 69U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 70U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 71U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 72U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 73U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 74U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 75U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 76U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 77U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 78U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 79U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 80U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 81U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 82U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 83U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 84U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 85U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 86U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 87U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 88U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 89U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 90U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 91U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 92U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 93U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 94U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 95U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 96U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 97U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 98U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 99U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 100U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 101U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 102U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 103U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 104U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 105U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 106U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 107U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 108U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 109U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 110U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 111U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 112U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 113U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 114U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 115U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 116U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 117U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 118U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 119U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 120U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 121U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 122U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 123U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 124U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 125U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 126U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 127U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 128U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 129U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 130U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 131U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 132U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 133U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 134U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 135U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 136U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 137U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 138U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 139U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 140U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 141U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 142U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 143U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 144U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 145U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 146U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 147U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 148U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 149U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 150U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 151U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 152U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 153U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 154U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 155U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 156U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 157U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 158U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 159U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 160U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 161U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 162U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 163U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 164U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 165U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 166U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 167U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 168U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 169U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 170U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 171U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 172U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 173U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 174U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 175U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 176U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 177U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 178U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 179U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 180U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 181U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 182U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 183U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 184U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 185U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 186U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 187U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 188U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 189U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 190U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 191U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 192U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 193U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 194U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 195U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 196U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 197U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 198U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 199U
            {
                RESERVED_CLK,                    /* name */
                0U,                           /* enable */
            },
            #endif
        },

        /* PCFS initialization. */ 
        {
            #if CLOCK_IP_PCFS_NO > 0U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 1U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 2U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 3U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 4U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 5U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 6U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 7U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 8U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 9U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 10U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 11U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 12U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 13U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 14U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 15U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 16U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 17U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 18U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_PCFS_NO > 19U
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
            #endif
        },

        /* Clock monitor initialization. */ 
        {
            #if CLOCK_IP_CMUS_NO > 0U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 1U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 2U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 3U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 4U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 5U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 6U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 7U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 8U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 9U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 10U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 11U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 12U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 13U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 14U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 15U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 16U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 17U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 18U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 19U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 20U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 21U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 22U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 23U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 24U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 25U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 26U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 27U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 28U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 29U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 30U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 31U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 32U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 33U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 34U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 35U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 36U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 37U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 38U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 39U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 40U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 41U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 42U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 43U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 44U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 45U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 46U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 47U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 48U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 49U
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
            #endif
        },

        /* Specific peripheral initialization. */
        {
            0U,
            {
                {
                    RESERVED_VALUE,
                    0U,
                },
            },
        },
        /* Configured frequency values. */
        {
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 0U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 1U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 2U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 3U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 4U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 5U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 6U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 7U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 8U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 9U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 10U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 11U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 12U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 13U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 14U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 15U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 16U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 17U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 18U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 19U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 20U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 21U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 22U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 23U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 24U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 25U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 26U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 27U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 28U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 29U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 30U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 31U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 32U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 33U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 34U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 35U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 36U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 37U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 38U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 39U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 40U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 41U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 42U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 43U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 44U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 45U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 46U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 47U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 48U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 49U
            {
                RESERVED_CLK,
                0U,
            },
            #endif
        },
    },
};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

