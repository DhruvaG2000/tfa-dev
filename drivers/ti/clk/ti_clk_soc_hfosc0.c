/*
 * Copyright (c) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * TI HFOSC0 (High Frequency Oscillator 0) Driver
 *
 * This driver provides software support for the system clock crystal,
 * which is the primary external oscillator providing the reference clock
 * for the entire SoC.
 */

#include <cdefs.h>

#include <lib/mmio.h>

#include <ti_clk.h>
#include <ti_clk_soc_hfosc0.h> /* SoC-specific configuration */

/**
 * ti_clk_soc_hfosc0_get_freq() - Get the HFOSC0 oscillator frequency.
 * @clk_ptr: unused.
 *
 * Reads the DEVSTAT register to determine the configured oscillator frequency
 * and validates it against the SoC-supported frequency list.
 *
 * Return: The oscillator frequency in Hz, or 0 if unsupported or out of range.
 */
static uint32_t ti_clk_soc_hfosc0_get_freq(struct ti_clk *clk_ptr __unused)
{
	uint32_t reg_val;
	uint32_t freq_from_reg;
	uint32_t i;

	const uint32_t freq_table[] = {
		19200000U,
		20000000U,
		24000000U,
		25000000U,
		26000000U,
		27000000U,
	};

	/* SoC-specific supported frequencies */
	const uint32_t supported_freqs[] = TI_HFOSC0_SUPPORTED_FREQS;

	reg_val = mmio_read_32(TI_HFOSC0_WKUP_CTRL_MMR_BASE + TI_HFOSC0_MAIN_DEVSTAT_OFFSET);
	reg_val &= TI_HFOSC0_DEVSTAT_FREQ_MASK;

	if (reg_val >= (uint32_t)ARRAY_SIZE(freq_table)) {
		return 0U;
	}

	freq_from_reg = freq_table[reg_val];

	/* Check if frequency is in SoC's supported list */
	for (i = 0U; i < (uint32_t)ARRAY_SIZE(supported_freqs) && supported_freqs[i] != 0U; i++) {
		if (freq_from_reg == supported_freqs[i]) {
			return freq_from_reg;
		}
	}

	return 0U;
}

static uint32_t ti_clk_soc_hfosc0_get_state(struct ti_clk *clk_ptr __unused)
{
	return TI_CLK_HW_STATE_ENABLED;
}

const struct ti_clk_drv ti_clk_drv_soc_hfosc0 = {
	.get_freq = ti_clk_soc_hfosc0_get_freq,
	.get_state = ti_clk_soc_hfosc0_get_state,
};
