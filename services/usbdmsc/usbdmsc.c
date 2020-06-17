/**************************************************************************//**
 * Copyright 2019 Microchip Corporation.
 *
 * SPDX-License-Identifier: MIT
 *
 *
 * SVN $Revision: 11522 $
 * SVN $Date: 2019-06-26 10:14:17 +0530 (Wed, 26 Jun 2019) $
 */

#include "config.h"
#include "hss_types.h"
#include "hss_debug.h"

#undef ROUNDUP
#undef ROUNDDOWN
#include "mpfs_hal/mss_hal.h"
#include "flash_drive_app.h"
#include "drivers/mss_gpio/mss_gpio.h"
#include "mss_plic.h"
#include "uart_helper.h"

/**************************************************************************//**
 */
void USBD_MSC_Loop(void)
{
    SYSREG->SOFT_RESET_CR &= ~ (1u << 16u);

    PLIC_init();

    PLIC_SetPriority(USB_DMA_PLIC, 3);
    PLIC_SetPriority(USB_MC_PLIC, 3);

    PLIC_EnableIRQ(USB_DMA_PLIC);
    PLIC_EnableIRQ(USB_MC_PLIC);

    MSS_GPIO_init(GPIO2_LO);
    MSS_GPIO_config(GPIO2_LO, MSS_GPIO_0, MSS_GPIO_OUTPUT_MODE | MSS_GPIO_IRQ_EDGE_NEGATIVE);

    MSS_GPIO_set_output(GPIO2_LO, MSS_GPIO_0, 0x1);
    MSS_GPIO_set_output(GPIO2_LO, MSS_GPIO_0, 0x0);

    PLIC_SetPriority(MMC_main_PLIC, 2u);
    PLIC_SetPriority(MMC_wakeup_PLIC, 2u);
    PLIC_EnableIRQ(MMC_main_PLIC);
    PLIC_EnableIRQ(MMC_wakeup_PLIC);

    MSS_MPU_configure(MSS_MPU_USB, MSS_MPU_PMP_REGION3, 0x08000000u, 0x200000u,
        MPU_MODE_READ_ACCESS|MPU_MODE_WRITE_ACCESS|MPU_MODE_EXEC_ACCESS, MSS_MPU_AM_NAPOT, 0u);

    /* DMA init for eMMC */
    MSS_MPU_configure(MSS_MPU_MMC, MSS_MPU_PMP_REGION3, 0x08000000u, 0x200000u,
        MPU_MODE_READ_ACCESS|MPU_MODE_WRITE_ACCESS|MPU_MODE_EXEC_ACCESS, MSS_MPU_AM_NAPOT, 0u);

    bool done = false;
    bool isHostConnected = false;
    uint8_t rx_byte = 0;

    done = !FLASH_DRIVE_init();

    if (done) {
        mHSS_DEBUG_PRINTF(LOG_ERROR, "FLASH_DRIVE_init() returned false..." CRLF);
    } else { //if (!done) {
        mHSS_PUTS("Waiting for USB Host to connect... (CTRL-C to quit)" CRLF);

        do {
            bool retval = uart_getchar(&rx_byte, 0, false);

            if (retval) {
                if (rx_byte == '\003') {
                    done = true;
                    break;
                }
            }

            if (!isHostConnected) {
                // if we are not connected, wait until we are
                isHostConnected = FLASH_DRIVE_is_host_connected();
                if (isHostConnected) {
                    mHSS_PUTS("USB Host connected. Waiting for disconnect... (CTRL-C to quit)" CRLF);
                }
            } else {
                // else quit once we've disconnected again...
                isHostConnected = FLASH_DRIVE_is_host_connected();
                if (!isHostConnected) {
                    done = true;
                }
            }

            //poll PLIC
            uint32_t source = PLIC_ClaimIRQ();

            switch (source) {
            case MMC_main_PLIC: // MMC interrupt
                mmc_main_plic_IRQHandler(); // interrupt 88
                break;

            case USB_MC_PLIC: // main USB interrupt
                usb_mc_plic_IRQHandler(); // interrupt 87
                break;

            case USB_DMA_PLIC: // DMA USB interrupt
                usb_dma_plic_IRQHandler(); // interrupt 86
                break;

            default:
                break;
            }

            if (source != INVALID_IRQn) {
                PLIC_CompleteIRQ(source);
            }
        } while (!done);
    }

    PLIC_ClearPendingIRQ();
}