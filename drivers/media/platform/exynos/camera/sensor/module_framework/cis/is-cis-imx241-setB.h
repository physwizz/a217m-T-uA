/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

// IMX241ES1_Samsung(0ATH5)_RegisterSetting_ver0.28-0.21_23.96MHz_160727(On5 pjt).xlsx

#ifndef IS_CIS_IMX241_SET_B_H
#define IS_CIS_IMX241_SET_B_H

#include "is-cis.h"
#include "is-cis-imx241.h"

const u32 sensor_imx241_setfile_B_initial[] = {
	// Init Global Setting
	0x0101, 0x00, 0x1,
	0x303C, 0x4B, 0x1,
	0x303D, 0x00, 0x1,
	0x3041, 0xD7, 0x1,
	0x30E0, 0x00, 0x1,
	0x30E1, 0x00, 0x1,
	0x30F6, 0x00, 0x1,
	0x34CE, 0xFF, 0x1,

	//Image Quality adjustment setting	
	//Mode Setting
	0x0340, 0x08, 0x1,
	0x0341, 0x7A, 0x1,
	0x0342, 0x05, 0x1,
	0x0343, 0xB0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x1F, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x97, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x3048, 0x20, 0x1,
	0x30D5, 0x00, 0x1,
	0x3165, 0x20, 0x1,
	0x30D1, 0x00, 0x1,
	0x30D0, 0x2A, 0x1,
	0x3102, 0x13, 0x1,
	0x3103, 0x47, 0x1,
	0x3049, 0x01, 0x1,
	0x304D, 0x02, 0x1,
	0x304C, 0xD7, 0x1,

	//Output Size Setting	
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0x96, 0x1,

	//Clock Setting
	0x0305, 0x03, 0x1,
	0x0307, 0x75, 0x1,
	0x3037, 0x0A, 0x1,
	0x3038, 0x01, 0x1,
	0x303E, 0x01, 0x1,
	0x30A2, 0x0E, 0x1,
	0x30A5, 0x60, 0x1,
	0x30A7, 0x40, 0x1,
	0x31AA, 0x02, 0x1,

	//Data Rate Setting
	0x3301, 0x00, 0x1,
	0x3318, 0x60, 0x1,

	//Integration Time Setting
	0x0202, 0x08, 0x1,
	0x0203, 0x75, 0x1,

	//Gain Setting
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
};

const u32 sensor_imx241_setfile_B_global[] = {
	// Init Global Setting
	0x0101, 0x00, 0x1,
	0x303C, 0x4B, 0x1,
	0x303D, 0x00, 0x1,
	0x3041, 0xD7, 0x1,
	0x30E0, 0x00, 0x1,
	0x30E1, 0x00, 0x1,
	0x30F6, 0x00, 0x1,
	0x34CE, 0xFF, 0x1,
};

const u32 sensor_imx241_setfile_B_Image[] = {

};

/* 4:3 */
const u32 sensor_imx241_setfile_B_2592x1942_30fps[] = {
	//Mode Setting
	0x0340, 0x08, 0x1,
	0x0341, 0x7A, 0x1,
	0x0342, 0x05, 0x1,
	0x0343, 0xB0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x1F, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x97, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x3048, 0x20, 0x1,
	0x30D5, 0x00, 0x1,
	0x3165, 0x20, 0x1,
	0x30D1, 0x00, 0x1,
	0x30D0, 0x2A, 0x1,
	0x3102, 0x13, 0x1,
	0x3103, 0x47, 0x1,
	0x3049, 0x01, 0x1,
	0x304D, 0x02, 0x1,
	0x304C, 0xD7, 0x1,

	//Output Size Setting	
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x96, 0x1,

	//Clock Setting
	0x0305, 0x03, 0x1,
	0x0307, 0x75, 0x1,
	0x3037, 0x0A, 0x1,
	0x3038, 0x01, 0x1,
	0x303E, 0x01, 0x1,
	0x30A2, 0x0E, 0x1,
	0x30A5, 0x60, 0x1,
	0x30A7, 0x40, 0x1,
	0x31AA, 0x02, 0x1,

	//Data Rate Setting
	0x3301, 0x00, 0x1,
	0x3318, 0x60, 0x1,

	//Integration Time Setting
	0x0202, 0x08, 0x1,
	0x0203, 0x75, 0x1,

	//Gain Setting
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
};

/* 16:9, 16x10 margin */
const u32 sensor_imx241_setfile_B_2592x1450_30fps[] = {
	//Mode Setting
	0x0340, 0x08, 0x1,
	0x0341, 0x7A, 0x1,
	0x0342, 0x05, 0x1,
	0x0343, 0xB0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0xF0, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x1F, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0xA7, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x3048, 0x20, 0x1,
	0x30D5, 0x00, 0x1,
	0x3165, 0x20, 0x1,
	0x30D1, 0x00, 0x1,
	0x30D0, 0x2A, 0x1,
	0x3102, 0x13, 0x1,
	0x3103, 0x47, 0x1,
	0x3049, 0x01, 0x1,
	0x304D, 0x02, 0x1,
	0x304C, 0xD7, 0x1,

	//Output Size Setting	
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0xAA, 0x1,

	//Clock Setting
	0x0305, 0x03, 0x1,
	0x0307, 0x75, 0x1,
	0x3037, 0x0A, 0x1,
	0x3038, 0x01, 0x1,
	0x303E, 0x01, 0x1,
	0x30A2, 0x0E, 0x1,
	0x30A5, 0x60, 0x1,
	0x30A7, 0x40, 0x1,
	0x31AA, 0x02, 0x1,
	0x0306, 0x00, 0x1,
	0x0309, 0x0A, 0x1,
	0x030D, 0x0F, 0x1,
	0x030E, 0x03, 0x1,
	0x030F, 0x41, 0x1,
	0x0310, 0x00, 0x1,

	//Data Rate Setting
	0x3301, 0x00, 0x1,
	0x3318, 0x60, 0x1,

	//Integration Time Setting
	0x0202, 0x08, 0x1,
	0x0203, 0x75, 0x1,

	//Gain Setting
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
};

/* 4:3 120fps*/
const u32 sensor_imx241_setfile_B_648x484_120fps[] = {
	//Mode Setting
	0x0340, 0x02, 0x1,
	0x0341, 0x1F, 0x1,
	0x0342, 0x05, 0x1,
	0x0343, 0xB0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x1F, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x8F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x07, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x07, 0x1,
	0x3048, 0x23, 0x1,
	0x30D5, 0x03, 0x1,
	0x3165, 0x28, 0x1,
	0x30D1, 0x00, 0x1,
	0x30D0, 0x2A, 0x1,
	0x3102, 0x13, 0x1,
	0x3103, 0x47, 0x1,
	0x3049, 0x01, 0x1,
	0x304D, 0x02, 0x1,
	0x304C, 0xD7, 0x1,

	//Output Size Setting	
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x034C, 0x02, 0x1,
	0x034D, 0x88, 0x1,
	0x034E, 0x01, 0x1,
	0x034F, 0xE4, 0x1,

	//Clock Setting
	0x0305, 0x03, 0x1,
	0x0307, 0x75, 0x1,
	0x3037, 0x0A, 0x1,
	0x3038, 0x01, 0x1,
	0x303E, 0x01, 0x1,
	0x30A2, 0x0E, 0x1,
	0x30A5, 0x60, 0x1,
	0x30A7, 0x40, 0x1,
	0x31AA, 0x02, 0x1,

	//Data Rate Setting
	0x3301, 0x00, 0x1,
	0x3318, 0x79, 0x1,

	//Integration Time Setting
	0x0202, 0x02, 0x1,
	0x0203, 0x1A, 0x1,

	//Gain Setting
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
};

/* 16:9 120fps*/
const u32 sensor_imx241_setfile_B_648x362_120fps[] = {
	//Mode Setting
	0x0340, 0x02, 0x1,
	0x0341, 0x1F, 0x1,
	0x0342, 0x05, 0x1,
	0x0343, 0xB0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x1F, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x97, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x07, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x07, 0x1,
	0x3048, 0x23, 0x1,
	0x30D5, 0x03, 0x1,
	0x3165, 0x28, 0x1,
	0x30D1, 0x00, 0x1,
	0x30D0, 0x2A, 0x1,
	0x3102, 0x13, 0x1,
	0x3103, 0x47, 0x1,
	0x3049, 0x01, 0x1,
	0x304D, 0x02, 0x1,
	0x304C, 0xD7, 0x1,

	//Output Size Setting	
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x034C, 0x02, 0x1,
	0x034D, 0x88, 0x1,
	0x034E, 0x01, 0x1,
	0x034F, 0x6A, 0x1,

	//Clock Setting
	0x0305, 0x03, 0x1,
	0x0307, 0x75, 0x1,
	0x3037, 0x0A, 0x1,
	0x3038, 0x01, 0x1,
	0x303E, 0x01, 0x1,
	0x30A2, 0x0E, 0x1,
	0x30A5, 0x60, 0x1,
	0x30A7, 0x40, 0x1,
	0x31AA, 0x02, 0x1,

	//Data Rate Setting
	0x3301, 0x00, 0x1,
	0x3318, 0x79, 0x1,

	//Integration Time Setting
	0x0202, 0x02, 0x1,
	0x0203, 0x1A, 0x1,

	//Gain Setting
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
};


const struct sensor_pll_info sensor_imx241_pllinfo_B_2592x1942_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x05, /* vt_pix_clk_div */
	0x02, /* vt_sys_clk_div */
	0x03, /* pre_pll_clk_div */
	0x75, /* pll_multiplier */
	0x01, /* op_pix_clk_div */
	0x01, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x87A, /* frame_length_lines */
	0x5B0, /* line_length_pck */
};

const struct sensor_pll_info sensor_imx241_pllinfo_B_2592x1450_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x05, /* vt_pix_clk_div */
	0x02, /* vt_sys_clk_div */
	0x03, /* pre_pll_clk_div */
	0x75, /* pll_multiplier */
	0x01, /* op_pix_clk_div */
	0x01, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x87A, /* frame_length_lines */
	0x5B0, /* line_length_pck */
};

const struct sensor_pll_info sensor_imx241_pllinfo_B_648x484_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x05, /* vt_pix_clk_div */
	0x02, /* vt_sys_clk_div */
	0x03, /* pre_pll_clk_div */
	0x75, /* pll_multiplier */
	0x01, /* op_pix_clk_div */
	0x01, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x21F, /* frame_length_lines */
	0x5B0, /* line_length_pck */
};

const struct sensor_pll_info sensor_imx241_pllinfo_B_648x362_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x05, /* vt_pix_clk_div */
	0x02, /* vt_sys_clk_div */
	0x03, /* pre_pll_clk_div */
	0x75, /* pll_multiplier */
	0x01, /* op_pix_clk_div */
	0x01, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x21F, /* frame_length_lines */
	0x5B0, /* line_length_pck */
};

static const u32 *sensor_imx241_setfiles_B[] = {
	sensor_imx241_setfile_B_2592x1942_30fps,
	sensor_imx241_setfile_B_2592x1450_30fps,
	sensor_imx241_setfile_B_648x484_120fps,
	sensor_imx241_setfile_B_648x362_120fps,
};

static const u32 sensor_imx241_setfile_B_sizes[] = {
	sizeof(sensor_imx241_setfile_B_2592x1942_30fps) / sizeof(sensor_imx241_setfile_B_2592x1942_30fps[0]),
	sizeof(sensor_imx241_setfile_B_2592x1450_30fps) / sizeof(sensor_imx241_setfile_B_2592x1450_30fps[0]),
	sizeof(sensor_imx241_setfile_B_648x484_120fps) / sizeof(sensor_imx241_setfile_B_648x484_120fps[0]),
	sizeof(sensor_imx241_setfile_B_648x362_120fps) / sizeof(sensor_imx241_setfile_B_648x362_120fps[0]),
};

static const u32 sensor_imx241_setfile_B_initial_size =
	sizeof(sensor_imx241_setfile_B_initial) / sizeof(sensor_imx241_setfile_B_initial[0]);
static const u32 sensor_imx241_setfile_B_global_size =
	sizeof(sensor_imx241_setfile_B_global) / sizeof(sensor_imx241_setfile_B_global[0]);
static const u32 sensor_imx241_setfile_B_Image_size =
	sizeof(sensor_imx241_setfile_B_Image) / sizeof(sensor_imx241_setfile_B_Image[0]);

static const struct sensor_pll_info *sensor_imx241_pllinfos_B[] = {
	&sensor_imx241_pllinfo_B_2592x1942_30fps,
	&sensor_imx241_pllinfo_B_2592x1450_30fps,
	&sensor_imx241_pllinfo_B_648x484_120fps,
	&sensor_imx241_pllinfo_B_648x362_120fps,
};

#endif

