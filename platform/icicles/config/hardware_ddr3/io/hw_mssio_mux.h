/*******************************************************************************
 * Copyright 2020 Microchip Corporation.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_mssio_mux.h
 * @author Microchip-FPGA Embedded Systems Solutions
 * 
 * Generated using Libero version: 10.0.0
 * Libero design name: test design
 * MPFS part number used in design: M2PFS250T_ES
 * Date generated by Libero: 2020-01-02 16:48:54
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
 * mss_sw_config.h is included prior to the hw_mssio_mux.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_MSSIO_MUX_H_
#define HW_MSSIO_MUX_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_IOMUX0_CR)
/*Selects whether the peripheral is connected to the Fabric or IOMUX structure. 
*/ 
#define LIBERO_SETTING_IOMUX0_CR    0x00000000UL
    /* SPI0_FABRIC                       [0:1]   RW value= 0x0 */ 
    /* SPI1_FABRIC                       [1:1]   RW value= 0x0 */ 
    /* I2C0_FABRIC                       [2:1]   RW value= 0x0 */ 
    /* I2C1_FABRIC                       [3:1]   RW value= 0x0 */ 
    /* CAN0_FABRIC                       [4:1]   RW value= 0x0 */ 
    /* CAN1_FABRIC                       [5:1]   RW value= 0x0 */ 
    /* QSPI_FABRIC                       [6:1]   RW value= 0x0 */ 
    /* MMUART0_FABRIC                    [7:1]   RW value= 0x0 */ 
    /* MMUART1_FABRIC                    [8:1]   RW value= 0x0 */ 
    /* MMUART2_FABRIC                    [9:1]   RW value= 0x0 */ 
    /* MMUART3_FABRIC                    [10:1]  RW value= 0x0 */ 
    /* MMUART4_FABRIC                    [11:1]  RW value= 0x0 */ 
    /* MDIO0_FABRIC                      [12:1]  RW value= 0x0 */ 
    /* MDIO1_FABRIC                      [13:1]  RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX1_CR)
/*Configures the IO Mux structure for each IO pad. See the MSS MAS 
specification for for description. */ 
#define LIBERO_SETTING_IOMUX1_CR    0xFFFFFFFFUL
    /* PAD0                              [0:4]   RW value= 0xF */ 
    /* PAD1                              [4:4]   RW value= 0xF */ 
    /* PAD2                              [8:4]   RW value= 0xF */ 
    /* PAD3                              [12:4]  RW value= 0xF */ 
    /* PAD4                              [16:4]  RW value= 0xF */ 
    /* PAD5                              [20:4]  RW value= 0xF */ 
    /* PAD6                              [24:4]  RW value= 0xF */ 
    /* PAD7                              [28:4]  RW value= 0xF */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX2_CR)
/*Configures the IO Mux structure for each IO pad. See the MSS MAS 
specification for for description. */ 
#define LIBERO_SETTING_IOMUX2_CR    0x00FFFFFFUL
    /* PAD8                              [0:4]   RW value= 0xF */ 
    /* PAD9                              [4:4]   RW value= 0xF */ 
    /* PAD10                             [8:4]   RW value= 0xF */ 
    /* PAD11                             [12:4]  RW value= 0xF */ 
    /* PAD12                             [16:4]  RW value= 0xF */ 
    /* PAD13                             [20:4]  RW value= 0xF */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX3_CR)
/*Configures the IO Mux structure for each IO pad. See the MSS MAS 
specification for for description. */ 
#define LIBERO_SETTING_IOMUX3_CR    0xFFFFFFFFUL
    /* PAD14                             [0:4]   RW value= 0xF */ 
    /* PAD15                             [4:4]   RW value= 0xF */ 
    /* PAD16                             [8:4]   RW value= 0xF */ 
    /* PAD17                             [12:4]  RW value= 0xF */ 
    /* PAD18                             [16:4]  RW value= 0xF */ 
    /* PAD19                             [20:4]  RW value= 0xF */ 
    /* PAD20                             [24:4]  RW value= 0xF */ 
    /* PAD21                             [28:4]  RW value= 0xF */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX4_CR)
/*Configures the IO Mux structure for each IO pad. See the MSS MAS 
specification for for description. */ 
#define LIBERO_SETTING_IOMUX4_CR    0xFFFFFFFFUL
    /* PAD22                             [0:4]   RW value= 0xF */ 
    /* PAD23                             [4:4]   RW value= 0xF */ 
    /* PAD24                             [8:4]   RW value= 0xF */ 
    /* PAD25                             [12:4]  RW value= 0xF */ 
    /* PAD26                             [16:4]  RW value= 0xF */ 
    /* PAD27                             [20:4]  RW value= 0xF */ 
    /* PAD28                             [24:4]  RW value= 0xF */ 
    /* PAD29                             [28:4]  RW value= 0xF */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX5_CR)
/*Configures the IO Mux structure for each IO pad. See the MSS MAS 
specification for for description. */ 
#define LIBERO_SETTING_IOMUX5_CR    0xFFFFFFFFUL
    /* PAD30                             [0:4]   RW value= 0xF */ 
    /* PAD31                             [4:4]   RW value= 0xF */ 
    /* PAD32                             [8:4]   RW value= 0xF */ 
    /* PAD33                             [12:4]  RW value= 0xF */ 
    /* PAD34                             [16:4]  RW value= 0xF */ 
    /* PAD35                             [20:4]  RW value= 0xF */ 
    /* PAD36                             [24:4]  RW value= 0xF */ 
    /* PAD37                             [28:4]  RW value= 0xF */ 
#endif
#if !defined (LIBERO_SETTING_IOMUX6_CR)
/*Sets whether the MMC/SD Voltage select lines are inverted on entry to the 
IOMUX structure */ 
#define LIBERO_SETTING_IOMUX6_CR    0x00000000UL
    /* VLT_SEL                           [0:1]   RW value= 0x0 */ 
    /* VLT_EN                            [1:1]   RW value= 0x0 */ 
    /* VLT_CMD_DIR                       [2:1]   RW value= 0x0 */ 
    /* VLT_DIR_0                         [3:1]   RW value= 0x0 */ 
    /* VLT_DIR_1_3                       [4:1]   RW value= 0x0 */ 
    /* SD_LED                            [5:1]   RW value= 0x0 */ 
    /* SD_VOLT_0                         [6:1]   RW value= 0x0 */ 
    /* SD_VOLT_1                         [7:1]   RW value= 0x0 */ 
    /* SD_VOLT_2                         [8:1]   RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_CFG_CR)
/*Configures the MSSIO block */ 
#define LIBERO_SETTING_MSSIO_BANK4_CFG_CR    0x00008247UL
    /* BANK_PCODE                        [0:6]   RW value= 0x7 */ 
    /* BANK_NCODE                        [6:6]   RW value= 0x9 */ 
    /* VS                                [12:4]  RW value= 0x8 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_0_1_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_0_1_CR    0x08290829UL
    /* IO_CFG_0                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_1                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_2_3_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_2_3_CR    0x08290829UL
    /* IO_CFG_2                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_3                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_4_5_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_4_5_CR    0x08290829UL
    /* IO_CFG_4                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_5                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_6_7_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_6_7_CR    0x08290829UL
    /* IO_CFG_6                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_7                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_8_9_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_8_9_CR    0x08290829UL
    /* IO_CFG_8                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_9                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_10_11_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_10_11_CR    0x08290829UL
    /* IO_CFG_10                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_11                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK4_IO_CFG_12_13_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK4_IO_CFG_12_13_CR    0x08290829UL
    /* IO_CFG_12                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_13                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_CFG_CR)
/*Configures the MSSIO block */ 
#define LIBERO_SETTING_MSSIO_BANK2_CFG_CR    0x00008247UL
    /* BANK_PCODE                        [0:6]   RW value= 0x7 */ 
    /* BANK_NCODE                        [6:6]   RW value= 0x9 */ 
    /* VS                                [12:4]  RW value= 0x8 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_0_1_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_0_1_CR    0x08290829UL
    /* IO_CFG_0                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_1                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_2_3_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_2_3_CR    0x08290829UL
    /* IO_CFG_2                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_3                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_4_5_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_4_5_CR    0x08290829UL
    /* IO_CFG_4                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_5                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_6_7_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_6_7_CR    0x08290829UL
    /* IO_CFG_6                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_7                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_8_9_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_8_9_CR    0x08290829UL
    /* IO_CFG_8                          [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_9                          [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_10_11_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_10_11_CR    0x08290829UL
    /* IO_CFG_10                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_11                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_12_13_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_12_13_CR    0x08290829UL
    /* IO_CFG_12                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_13                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_14_15_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_14_15_CR    0x08290829UL
    /* IO_CFG_14                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_15                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_16_17_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_16_17_CR    0x08290829UL
    /* IO_CFG_16                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_17                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_18_19_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_18_19_CR    0x08290829UL
    /* IO_CFG_18                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_19                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_20_21_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_20_21_CR    0x08290829UL
    /* IO_CFG_20                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_21                         [16:16] RW value= 0x0829 */ 
#endif
#if !defined (LIBERO_SETTING_MSSIO_BANK2_IO_CFG_22_23_CR)
/*IO electrical configuration for MSSIO pad */ 
#define LIBERO_SETTING_MSSIO_BANK2_IO_CFG_22_23_CR    0x08290829UL
    /* IO_CFG_22                         [0:16]  RW value= 0x0829 */ 
    /* IO_CFG_23                         [16:16] RW value= 0x0829 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_MSSIO_MUX_H_ */

