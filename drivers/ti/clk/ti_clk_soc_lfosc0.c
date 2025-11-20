/*
 * Copyright (c) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * TI LFOSC0 (Low Frequency Oscillator 0) Driver
 *
 * This driver provides software support for the low frequency oscillator,
 * which is typically a 32 KHz crystal used for RTC (Real-Time Clock) and
 * low-power timekeeping.
 */

#include <cdefs.h>

#include <lib/mmio.h>

#include <ti_clk.h>
#include <ti_clk_soc_lfosc0.h> /* SoC-specific configuration */

/**
 * ti_clk_soc_lfosc0_get_freq() - Get the LFOSC0 oscillator frequency.
 * @clk_ptr: unused.
 *
 * Return: TI_LFOSC0_FREQ_HZ if the oscillator is enabled, 0 otherwise.
 */
static uint32_t ti_clk_soc_lfosc0_get_freq(struct ti_clk *clk_ptr __unused)
{
	uint32_t reg_val;

	reg_val = mmio_read_32(TI_LFOSC0_RTC_BASE + TI_LFOSC0_LFXOSC_CTRL_OFFSET);
	reg_val &= TI_LFOSC0_32K_DISABLE_VAL;
	if (reg_val == 0U) {
		return TI_LFOSC0_FREQ_HZ;
	}

	return 0U;
}

static uint32_t ti_clk_soc_lfosc0_get_state(struct ti_clk *clk_ptr __unused)
{
	uint32_t reg_val;

	reg_val = mmio_read_32(TI_LFOSC0_RTC_BASE + TI_LFOSC0_LFXOSC_CTRL_OFFSET);
	reg_val &= TI_LFOSC0_32K_DISABLE_VAL;
	if (reg_val == 0U) {
		return TI_CLK_HW_STATE_ENABLED;
	}

	return TI_CLK_HW_STATE_DISABLED;
}

const struct ti_clk_drv ti_clk_drv_soc_lfosc0 = {
	.get_freq = ti_clk_soc_lfosc0_get_freq,
	.get_state = ti_clk_soc_lfosc0_get_state,
};
