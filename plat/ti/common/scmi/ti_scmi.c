/*
 * Copyright (C) 2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include <drivers/scmi-msg.h>
#include <drivers/scmi.h>

#include <platform_def.h>
#include <ti_plat_scmi_def.h>

const uint8_t ti_scmi_protocol_table[] = {
	0,
};

static const char vendor_name[] = "TI";
static const char sub_vendor_name[] = "";

static struct scmi_msg_channel ti_scmi_channel[TI_SCMI_NO_OF_CHANNELS] = {
	[0] = {
		.shm_addr = SCMI_SHMEM_ADDR,
		.shm_size = SCMI_SHMEM_SIZE,
	},
};

const char *plat_scmi_vendor_name(void)
{
	return vendor_name;
}

const char *plat_scmi_sub_vendor_name(void)
{
	return sub_vendor_name;
}

size_t plat_scmi_protocol_count(void)
{
	size_t count = 0U;
	const uint8_t *protocol_list = ti_scmi_protocol_table;

	while (protocol_list[count] != 0U) {
		count++;
	}

	return count;
}

const uint8_t *plat_scmi_protocol_list(unsigned int agent_id)
{
	if (agent_id >= TI_SCMI_NO_OF_CHANNELS) {
		return NULL;
	}
	return ti_scmi_protocol_table;
}

struct scmi_msg_channel *plat_scmi_get_channel(unsigned int agent_id)
{
	if (agent_id >= TI_SCMI_NO_OF_CHANNELS) {
		return NULL;
	}
	return &ti_scmi_channel[agent_id];
}

void ti_init_scmi_server(void)
{
	size_t i;

	for (i = 0U; i < TI_SCMI_NO_OF_CHANNELS; i++) {
		scmi_smt_init_agent_channel(&ti_scmi_channel[i]);
	}
}
