/*
 * Copyright (C) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Device Handler API
 *
 * This header provides device state handler functions and constants for
 * managing device states, retention modes, and exclusive device ownership
 * as part of the power management subsystem.
 */

#ifndef TI_DEVICE_HANDLER_H
#define TI_DEVICE_HANDLER_H

/*
 * Claim a device exclusively. When passed with STATE_RETENTION or STATE_ON,
 * it will claim the device exclusively. If another host already has this
 * device set to STATE_RETENTION or STATE_ON, the message will fail. Once
 * successful, other hosts attempting to set STATE_RETENTION or STATE_ON
 * will fail.
 */
#define TI_DEVICE_EXCLUSIVE	      BIT(10)

/*
 * Turn device off when possible. This must be used in conjunction with
 * SoC dependencies to identify the overall power domain state being
 * achieved.
 */
#define TI_DEVICE_SW_STATE_AUTO_OFF    0

/* Disable device but keep in retention. */
#define TI_DEVICE_SW_STATE_RETENTION   1

/* Turn device on for usage. */
#define TI_DEVICE_SW_STATE_ON	    2

/*
 * Hardware state indicating device is on.
 */
#define TI_DEVICE_HW_STATE_ON	    1

/**
 * ti_set_device_handler() - Set device power state
 * @dev_id: Device ID to set state for
 * @enable: true to enable device, false to disable
 *
 * Return: 0 if the API executed successfully, -EFAIL if the API failed
 */
int32_t ti_set_device_handler(uint32_t dev_id, bool enable);

/**
 * ti_get_device_handler() - Get device power state
 * @dev_id: Device ID to get state for
 *
 * Return: true if enabled, false if disabled
 */
bool ti_get_device_handler(uint32_t dev_id);

#endif /* TI_DEVICE_HANDLER_H */
