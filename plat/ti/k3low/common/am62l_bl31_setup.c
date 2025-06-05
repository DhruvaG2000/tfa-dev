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
	K3_MAP_REGION_FLAT(K3_USART_BASE,       K3_USART_SIZE,       MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(K3_GIC_BASE,         K3_GIC_SIZE,         MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(K3_GTC_BASE,         K3_GTC_SIZE,         MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(TI_MAILBOX_TX_BASE,  TI_MAILBOX_SIZE,         MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(TI_MAILBOX_RX_BASE,  TI_MAILBOX_SIZE,         MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(MAILBOX_TX_START_REGION,  MAILBOX_MAX_MESSAGE_SIZE,       MT_DEVICE | MT_RW | MT_SECURE),
	K3_MAP_REGION_FLAT(MAILBOX_RX_START_REGION,  MAILBOX_MAX_MESSAGE_SIZE,       MT_DEVICE | MT_RW | MT_SECURE),
	{ /* sentinel */ }
};

int ti_soc_init(void)
{
	/* nothing to do right now */
	return 0;
}
