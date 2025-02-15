/*******************************************************************************
 * Copyright 2019-2021 Microchip FPGA Embedded Systems Solutions.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_platform.h
 * @author Embedded Software
 * 
 * Generated using Libero version: 1.0
 * Libero design name: ICICLE_MSS
 * MPFS part number used in design: MPFS250T_ES
 * Date generated by Libero: 11-16-2020_19:07:30
 * Format version of XML description: 0.3.8
 * PolarFire SoC Configuration Generator version: 0.4.1
 * 
 * Note 1: This file should not be edited. If you need to modify a parameter,
 * without going through the Libero flow or editing the associated xml file,
 * the following method is recommended:
 *   1. edit the file platform//config//software//mpfs_hal//mss_sw_config.h
 *   2. define the value you want to override there. (Note: There is a 
 *      commented example in mss_sw_config.h)
 * Note 2: The definition in mss_sw_config.h takes precedence, as 
 * mss_sw_config.h is included prior to the hw_platform.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_PLATFORM_H_
#define HW_PLATFORM_H_

#include "memory_map/hw_memory.h" 
#include "memory_map/hw_apb_split.h" 
#include "memory_map/hw_cache.h" 
#include "memory_map/hw_pmp_hart0.h" 
#include "memory_map/hw_pmp_hart1.h" 
#include "memory_map/hw_pmp_hart2.h" 
#include "memory_map/hw_pmp_hart3.h" 
#include "memory_map/hw_pmp_hart4.h" 
#include "memory_map/hw_mpu_fic0.h" 
#include "memory_map/hw_mpu_fic1.h" 
#include "memory_map/hw_mpu_fic2.h" 
#include "memory_map/hw_mpu_crypto.h" 
#include "memory_map/hw_mpu_gem0.h" 
#include "memory_map/hw_mpu_gem1.h" 
#include "memory_map/hw_mpu_usb.h" 
#include "memory_map/hw_mpu_mmc.h" 
#include "memory_map/hw_mpu_scb.h" 
#include "memory_map/hw_mpu_trace.h" 
#include "io/hw_mssio_mux.h" 
#include "io/hw_hsio_mux.h" 
#include "sgmii/hw_sgmii_tip.h" 
#include "ddr/hw_ddr_options.h" 
#include "ddr/hw_ddr_io_bank.h" 
#include "ddr/hw_ddr_mode.h" 
#include "ddr/hw_ddr_off_mode.h" 
#include "ddr/hw_ddr_segs.h" 
#include "ddr/hw_ddrc.h" 
#include "clocks/hw_mss_clks.h" 
#include "clocks/hw_clk_sysreg.h" 
#include "clocks/hw_clk_mss_pll.h" 
#include "clocks/hw_clk_sgmii_pll.h" 
#include "clocks/hw_clk_ddr_pll.h" 
#include "clocks/hw_clk_mss_cfm.h" 
#include "clocks/hw_clk_sgmii_cfm.h" 
#include "general/hw_gen_peripherals.h" 

#ifdef __cplusplus
extern  "C" {
#endif

/* No content in this file, used for referencing header */

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_PLATFORM_H_ */

