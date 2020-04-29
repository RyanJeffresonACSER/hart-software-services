/*******************************************************************************
 * Copyright 2020 Microchip Corporation.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_mss_clks.h
 * @author Microchip-FPGA Embedded Systems Solutions
 * 
 * Generated using Libero version: 12.900.0.4-PFSOC_MSS_INT:1.0.112
 * Libero design name: PFSOC_MSS_INT_C0
 * MPFS part number used in design: MPFS250T_ES
 * Date generated by Libero: 02-13-2020_18:30:57
 * Format version of XML description: 0.3.1
 * PolarFire SoC Configuration Generator version: 0.3.2
 * 
 * Note 1: This file should not be edited. If you need to modify a parameter,
 * without going through the Libero flow or editing the associated xml file,
 * the following method is recommended:
 *   1. edit the file platform//config//software//mpfs_hal//mss_sw_config.h
 *   2. define the value you want to override there. (Note: There is a 
 *      commented example in mss_sw_config.h)
 * Note 2: The definition in mss_sw_config.h takes precedence, as 
 * mss_sw_config.h is included prior to the hw_mss_clks.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_MSS_CLKS_H_
#define HW_MSS_CLKS_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_MSS_EXT_SGMII_REF_CLK)
/*Ref Clock rate in MHz */ 
#define LIBERO_SETTING_MSS_EXT_SGMII_REF_CLK    100000000
    /* MSS_EXT_SGMII_REF_CLK             [0:32]  RW value= 100000000 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_COREPLEX_CPU_CLK)
/*CPU Clock rate in MHz */ 
#define LIBERO_SETTING_MSS_COREPLEX_CPU_CLK    625000000
    /* MSS_COREPLEX_CPU_CLK              [0:32]  RW value= 625000000 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_SYSTEM_CLK)
/*System Clock rate in MHz static power. */ 
#define LIBERO_SETTING_MSS_SYSTEM_CLK    625000000
    /* MSS_SYSTEM_CLK                    [0:32]  RW value= 625000000 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_RTC_TOGGLE_CLK)
/*RTC toggle Clock rate in MHz static power. */ 
#define LIBERO_SETTING_MSS_RTC_TOGGLE_CLK    1000000
    /* MSS_RTC_TOGGLE_CLK                [0:32]  RW value= 1000000 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_AXI_CLK)
/*AXI Clock rate in MHz static power. */ 
#define LIBERO_SETTING_MSS_AXI_CLK    312000000
    /* MSS_AXI_CLK                       [0:32]  RW value= 312000000 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_APB_AHB_CLK)
/*AXI Clock rate in MHz static power. */ 
#define LIBERO_SETTING_MSS_APB_AHB_CLK    156000000
    /* MSS_APB_AHB_CLK                   [0:32]  RW value= 156000000 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_MSS_CLKS_H_ */

