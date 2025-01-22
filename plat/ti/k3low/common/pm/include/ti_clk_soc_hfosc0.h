/*
 * Copyright (c) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef TI_CLK_SOC_HFOSC0_H
#define TI_CLK_SOC_HFOSC0_H

#include <cdefs.h>

#include <ti_clk.h>

/* AM62LX board-specific configuration */
#define TI_HFOSC0_WKUP_CTRL_MMR_BASE    0x43010000UL
#define TI_HFOSC0_MAIN_DEVSTAT_OFFSET   0x30UL
#define TI_HFOSC0_DEVSTAT_FREQ_MASK     0x7U

/*
 * AM62LX supported HFOSC0 frequencies
 * List all frequencies this board can support (terminated with 0)
 */
#define TI_HFOSC0_SUPPORTED_FREQS { 25000000U, 0U }

extern const struct ti_clk_drv ti_clk_drv_soc_hfosc0;

#endif /* TI_CLK_SOC_HFOSC0_H */
