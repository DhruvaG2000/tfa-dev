/*
 * Copyright (C) 2025 Texas Instruments Incorporated - http://www.ti.com/
 * AM62Lx SoC specific bl31_setup
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/debug.h>
#include <ti_sci.h>
#include <ti_sci_transport.h>

#include <plat_private.h>

/* Table of regions to map using the MMU */
const mmap_region_t plat_k3_mmap[] = {
	MAP_REGION_FLAT(0x0000000,  0x80000000,         MT_DEVICE | MT_RW | MT_SECURE),
	{ /* sentinel */ }
};

int ti_soc_init(void)
{
	struct ti_sci_msg_version version;
	int ret;

	/* nothing to do right now */
	ERROR("=== TI SoC Init ===\n");
	generic_delay_timer_init();

	ti_sci_boot_notification();

	ret = ti_sci_get_revision(&version);
	if (ret) {
		ERROR("Unable to communicate with the control firmware (%d)\n", ret);
		return ret;
	}

	NOTICE("SYSFW ABI: %d.%d (firmware rev 0x%04x '%s')\n",
	     version.abi_major, version.abi_minor,
	     version.firmware_revision,
	     version.firmware_description);


	return 0;
}
