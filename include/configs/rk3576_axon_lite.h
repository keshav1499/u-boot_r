/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2023 Vicharak India
 */
#define COUNTER_FREQUENCY		24000000
#ifndef __RK3576_AXON_LITE_H
#define __RK3576_AXON_LITE_H

#include <configs/vicharak_common_defs.h>

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0" \
		"stdin=usbkbd,serial\0" \
		VICHARAK_BOOT_MENU

#define CONFIG_SYS_MMC_ENV_DEV		0	/* eMMC */

#include <configs/rk3576_common.h>

#endif /* __RK3576_AXON_LITE_H */
