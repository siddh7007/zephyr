/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>
#include <logging/log.h>
#include <stdlib.h>
#include <device.h>
#include <devicetree.h>

#define I2C_DEV DT_LABEL(DT_INST_BUS_LABEL(0)) 
LOG_MODULE_REGISTER(app);

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
	struct device *dev;

	dev = device_get_binding(I2C_DEV);
	if (dev == NULL) {
		LOG_ERR("/soc/i2c@40005400Failed to get pointer device!");
		}
}
