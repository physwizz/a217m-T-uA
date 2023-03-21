/*
 * Samsung Exynos5 SoC series FIMC-IS driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_SPI_H
#define IS_SPI_H

#define IS_SPI_OUTPUT	1
#define IS_SPI_FUNC	2

/* SPI PIN MODE */
enum {
	SPI_PIN_STATE_HOST,
	SPI_PIN_STATE_ISP_FW,
	SPI_PIN_STATE_IDLE_INPD,
	SPI_PIN_STATE_IDLE_INPU,
	SPI_PIN_STATE_IDLE,
};

struct is_spi_gpio {
	char *clk;
	char *ssn;
	char *miso;
	char *mosi;
	char *pinname;
};

struct is_spi {
	struct spi_device	*device;
	char			*node;
	u32			channel;
	bool			use_spi_pinctrl;
	struct pinctrl		*pinctrl;
	struct pinctrl		*parent_pinctrl;
	struct pinctrl_state 	*pin_ssn_out;
	struct pinctrl_state 	*pin_ssn_fn;
	struct pinctrl_state 	*pin_ssn_inpd;
	struct pinctrl_state 	*pin_ssn_inpu;
	struct pinctrl_state 	*parent_pin_out;
	struct pinctrl_state 	*parent_pin_fn;
};

int is_spi_s_pin(struct is_spi *spi, int state);
int is_spi_reset(struct is_spi *spi);
int is_spi_read(struct is_spi *spi, void *buf, u32 addr, size_t size);
#endif
