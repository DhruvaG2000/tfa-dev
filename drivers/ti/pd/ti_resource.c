/*
 * Copyright (c) 2025-2026 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Device Resource Management
 *
 * This module provides resource lookup and access functions for device
 * resources including memory, clocks, and resets stored in device tables.
 */

#include <assert.h>
#include <limits.h>
#include <stddef.h>

#include <lib/utils_def.h>

#include <ti_device.h>
#include <ti_resource.h>

#define TI_RESOURCE_TYPE_MASK	0xc0U

/*
 * Lookup a resource table entry.
 *
 * This function walks the resource table, first finding the array of correct
 * resource type, and then returning the resource at the appropriate index.
 */
const void *ti_resource_get(struct ti_device *dev, uint8_t type, uint8_t idx)
{
	/*
	 * The downshift here is just because the macro that defines the type
	 * starts at bit 6.
	 */
	static const uint8_t sizes[(TI_RESOURCE_MEM >> 6U) + 1U] = {
		[0] = 0U,
		[1] = 0U,
		[TI_RESOURCE_MEM >> 6U] = (uint8_t) sizeof(struct ti_resource_mem),
	};
	const struct ti_dev_data *ddata;
	const uint8_t *data;
	const uint8_t *r;
	uint8_t hdr;
	uint8_t type_idx;
	uint8_t hdr_idx;

	CASSERT(((sizeof(struct ti_resource_mem)) <= ((size_t) UCHAR_MAX)),
		     size_of_resource_mem);

	assert(dev != NULL);

	ddata = ti_get_dev_data(dev);
	/*
	 * If the device does not have drv_data, it does not have resources.
	 * Return NULL
	 */
	r = (((uint32_t) (ddata->flags) & TI_DEVD_FLAG_DRV_DATA) ==
	     TI_DEVD_FLAG_DRV_DATA) ? ti_to_drv_data(ddata)->r : NULL;

	while (r != NULL) {
		hdr = r[0];
		data = r + 1;
		/* Is this the right resource type? */
		if ((hdr & TI_RESOURCE_TYPE_MASK) == type) {
			/* Is the array long enough? */
			if (idx < (hdr & TI_RESOURCE_COUNT_MASK)) {
				/* Return our resource */
				type_idx = (uint8_t)(type >> 6U);
				if (type_idx < ARRAY_SIZE(sizes)) {
					r = &data[idx * sizes[type_idx]];
				} else {
					r = NULL;
				}
				break;
			} else {
				r = NULL;
			}
		} else if ((hdr & TI_RESOURCE_LAST) != 0U) {
			/* We've reached the end of the table, stop walking */
			r = NULL;
		} else {
			/* Walk to the next entry */
			hdr_idx = (uint8_t)(hdr >> 6U);
			if ((hdr_idx < ARRAY_SIZE(sizes)) && (sizes[hdr_idx] != 0U)) {
				r = &data[(hdr & TI_RESOURCE_COUNT_MASK) * sizes[hdr_idx]];
			} else {
				r = NULL;
			}
		}
	}

	return r;
}
