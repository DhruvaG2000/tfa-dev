/*
 * Texas Instruments Mailbox Driver
 *
 * Copyright (C) 2024-2025 Texas Instruments Incorporated - https://www.ti.com/
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <errno.h>
#include <stdlib.h>

#include <arch_helpers.h>
#include <common/debug.h>
#include <lib/mmio.h>
#include <lib/utils.h>
#include <lib/utils_def.h>

#include "mailbox.h"
#include <platform_def.h>

int8_t ti_mailbox_poll_status(void)
{
	uint32_t i = 0;
	uint32_t tick_start = (uint32_t)read_cntpct_el0();
	uint32_t ticks_per_us = SYS_COUNTER_FREQ_IN_TICKS / 1000000;

	while (i == 0U) {
		i = mmio_read_32(TIFS_MAILBOX_BASE1 + TIFS_MAILBOX_MSG_STATUS);
		if (((uint32_t)read_cntpct_el0() - tick_start) >
		    (SEC_PROXY_TIMEOUT_US * ticks_per_us)) {
			return -ETIMEDOUT;
		}
	}
	return 0;
}

int ti_sci_transport_clear_rx_thread(enum k3_sec_proxy_chan_id id)
{
	uint32_t try_count = 10;

	/* Run the loop till the status register is cleared */
	while (mmio_read_32(TIFS_MAILBOX_BASE1 + TIFS_MAILBOX_MSG_STATUS) != 0U) {
		if (!(try_count--)) {
			ERROR("Could not clear all messages from mailbox FIFO \n");
			return -ETIMEDOUT;
		}
		WARN("Clearing message from mailbox FIFO\n");
		/* The act of reading the mailbox msg itself clears it */
		mmio_read_32(TIFS_MAILBOX_BASE1 + TIFS_MAILBOX_MSG);
	}

	return 0;
}

int ti_sci_transport_send(enum k3_sec_proxy_chan_id id, const struct ti_sci_msg *msg)
{
	uint32_t num_bytes;
	void *dst_ptr = (void *)MAILBOX_TX_START_REGION;

	num_bytes = msg->len / sizeof(msg->buf[0]);

	if (num_bytes > MAILBOX_TX_REGION_SIZE) {
		ERROR("message length %lu > max msg size\n", msg->len);
		return -EINVAL;
	}

	/*
	 * Move the buffer contents into the SRAM to be accessed by TIFS
	 * TODO: Implement buffer mgmt for multiple TI SCI messages B2B
	 */
	memmove(dst_ptr, msg->buf, num_bytes);

	mmio_write_32(TIFS_MAILBOX_BASE0 + TIFS_MAILBOX_MSG, (uint64_t)(void *)dst_ptr);

	return 0;
}

int ti_sci_transport_recv(enum k3_sec_proxy_chan_id id, struct ti_sci_msg *msg)
{
	uint32_t num_bytes;
	uint64_t rcv_addr;

	if (msg == NULL) {
		ERROR("%s: No memory to receive message!\n", __func__);
		return -ENOBUFS;
	}

	if (ti_mailbox_poll_status() == -ETIMEDOUT) {
		ERROR("Timeout waiting for receive\n");
		return -ETIMEDOUT;
	}

	rcv_addr = mmio_read_32(TIFS_MAILBOX_BASE1 + TIFS_MAILBOX_MSG);

	assert((rcv_addr < TIFS_MESSAGE_RESP_END_REGION) &&
	       (rcv_addr >= TIFS_MESSAGE_RESP_START_REGION));

	num_bytes = msg->len / sizeof(msg->buf[0]);

	for (uint32_t i = 0; i < num_bytes; i++) {
		((uint8_t *)msg->buf)[i] = *(uint8_t *)(rcv_addr);
		rcv_addr += sizeof(msg->buf[0]);
	}

	return 0;
}
