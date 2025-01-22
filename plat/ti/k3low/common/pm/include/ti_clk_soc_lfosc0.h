/*
 * Copyright (c) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef TI_CLK_SOC_LFOSC0_H
#define TI_CLK_SOC_LFOSC0_H

#include <ti_clk.h>

/* AM62LX board-specific configuration */
#define TI_LFOSC0_RTC_BASE           0x2b1f0000UL
#define TI_LFOSC0_LFXOSC_CTRL_OFFSET 0x80UL
#define TI_LFOSC0_32K_DISABLE_VAL    0x80UL
#define TI_LFOSC0_FREQ_HZ            32768U

extern const struct ti_clk_drv ti_clk_drv_soc_lfosc0;

#endif /* TI_CLK_SOC_LFOSC0_H */
