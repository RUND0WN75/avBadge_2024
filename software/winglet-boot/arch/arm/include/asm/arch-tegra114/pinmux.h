/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2010-2014, NVIDIA CORPORATION. All rights reserved.
 */

#ifndef _TEGRA114_PINMUX_H_
#define _TEGRA114_PINMUX_H_

enum pmux_pingrp {
	PMUX_PINGRP_ULPI_DATA0_PO1,
	PMUX_PINGRP_ULPI_DATA1_PO2,
	PMUX_PINGRP_ULPI_DATA2_PO3,
	PMUX_PINGRP_ULPI_DATA3_PO4,
	PMUX_PINGRP_ULPI_DATA4_PO5,
	PMUX_PINGRP_ULPI_DATA5_PO6,
	PMUX_PINGRP_ULPI_DATA6_PO7,
	PMUX_PINGRP_ULPI_DATA7_PO0,
	PMUX_PINGRP_ULPI_CLK_PY0,
	PMUX_PINGRP_ULPI_DIR_PY1,
	PMUX_PINGRP_ULPI_NXT_PY2,
	PMUX_PINGRP_ULPI_STP_PY3,
	PMUX_PINGRP_DAP3_FS_PP0,
	PMUX_PINGRP_DAP3_DIN_PP1,
	PMUX_PINGRP_DAP3_DOUT_PP2,
	PMUX_PINGRP_DAP3_SCLK_PP3,
	PMUX_PINGRP_PV0,
	PMUX_PINGRP_PV1,
	PMUX_PINGRP_SDMMC1_CLK_PZ0,
	PMUX_PINGRP_SDMMC1_CMD_PZ1,
	PMUX_PINGRP_SDMMC1_DAT3_PY4,
	PMUX_PINGRP_SDMMC1_DAT2_PY5,
	PMUX_PINGRP_SDMMC1_DAT1_PY6,
	PMUX_PINGRP_SDMMC1_DAT0_PY7,
	PMUX_PINGRP_CLK2_OUT_PW5 = (0x68 / 4),
	PMUX_PINGRP_CLK2_REQ_PCC5,
	PMUX_PINGRP_HDMI_INT_PN7 = (0x110 / 4),
	PMUX_PINGRP_DDC_SCL_PV4,
	PMUX_PINGRP_DDC_SDA_PV5,
	PMUX_PINGRP_UART2_RXD_PC3 = (0x164 / 4),
	PMUX_PINGRP_UART2_TXD_PC2,
	PMUX_PINGRP_UART2_RTS_N_PJ6,
	PMUX_PINGRP_UART2_CTS_N_PJ5,
	PMUX_PINGRP_UART3_TXD_PW6,
	PMUX_PINGRP_UART3_RXD_PW7,
	PMUX_PINGRP_UART3_CTS_N_PA1,
	PMUX_PINGRP_UART3_RTS_N_PC0,
	PMUX_PINGRP_PU0,
	PMUX_PINGRP_PU1,
	PMUX_PINGRP_PU2,
	PMUX_PINGRP_PU3,
	PMUX_PINGRP_PU4,
	PMUX_PINGRP_PU5,
	PMUX_PINGRP_PU6,
	PMUX_PINGRP_GEN1_I2C_SDA_PC5,
	PMUX_PINGRP_GEN1_I2C_SCL_PC4,
	PMUX_PINGRP_DAP4_FS_PP4,
	PMUX_PINGRP_DAP4_DIN_PP5,
	PMUX_PINGRP_DAP4_DOUT_PP6,
	PMUX_PINGRP_DAP4_SCLK_PP7,
	PMUX_PINGRP_CLK3_OUT_PEE0,
	PMUX_PINGRP_CLK3_REQ_PEE1,
	PMUX_PINGRP_GMI_WP_N_PC7,
	PMUX_PINGRP_GMI_IORDY_PI5,
	PMUX_PINGRP_GMI_WAIT_PI7,
	PMUX_PINGRP_GMI_ADV_N_PK0,
	PMUX_PINGRP_GMI_CLK_PK1,
	PMUX_PINGRP_GMI_CS0_N_PJ0,
	PMUX_PINGRP_GMI_CS1_N_PJ2,
	PMUX_PINGRP_GMI_CS2_N_PK3,
	PMUX_PINGRP_GMI_CS3_N_PK4,
	PMUX_PINGRP_GMI_CS4_N_PK2,
	PMUX_PINGRP_GMI_CS6_N_PI3,
	PMUX_PINGRP_GMI_CS7_N_PI6,
	PMUX_PINGRP_GMI_AD0_PG0,
	PMUX_PINGRP_GMI_AD1_PG1,
	PMUX_PINGRP_GMI_AD2_PG2,
	PMUX_PINGRP_GMI_AD3_PG3,
	PMUX_PINGRP_GMI_AD4_PG4,
	PMUX_PINGRP_GMI_AD5_PG5,
	PMUX_PINGRP_GMI_AD6_PG6,
	PMUX_PINGRP_GMI_AD7_PG7,
	PMUX_PINGRP_GMI_AD8_PH0,
	PMUX_PINGRP_GMI_AD9_PH1,
	PMUX_PINGRP_GMI_AD10_PH2,
	PMUX_PINGRP_GMI_AD11_PH3,
	PMUX_PINGRP_GMI_AD12_PH4,
	PMUX_PINGRP_GMI_AD13_PH5,
	PMUX_PINGRP_GMI_AD14_PH6,
	PMUX_PINGRP_GMI_AD15_PH7,
	PMUX_PINGRP_GMI_A16_PJ7,
	PMUX_PINGRP_GMI_A17_PB0,
	PMUX_PINGRP_GMI_A18_PB1,
	PMUX_PINGRP_GMI_A19_PK7,
	PMUX_PINGRP_GMI_WR_N_PI0,
	PMUX_PINGRP_GMI_OE_N_PI1,
	PMUX_PINGRP_GMI_DQS_P_PJ3,
	PMUX_PINGRP_GMI_RST_N_PI4,
	PMUX_PINGRP_GEN2_I2C_SCL_PT5,
	PMUX_PINGRP_GEN2_I2C_SDA_PT6,
	PMUX_PINGRP_SDMMC4_CLK_PCC4,
	PMUX_PINGRP_SDMMC4_CMD_PT7,
	PMUX_PINGRP_SDMMC4_DAT0_PAA0,
	PMUX_PINGRP_SDMMC4_DAT1_PAA1,
	PMUX_PINGRP_SDMMC4_DAT2_PAA2,
	PMUX_PINGRP_SDMMC4_DAT3_PAA3,
	PMUX_PINGRP_SDMMC4_DAT4_PAA4,
	PMUX_PINGRP_SDMMC4_DAT5_PAA5,
	PMUX_PINGRP_SDMMC4_DAT6_PAA6,
	PMUX_PINGRP_SDMMC4_DAT7_PAA7,
	PMUX_PINGRP_CAM_MCLK_PCC0 = (0x284 / 4),
	PMUX_PINGRP_PCC1,
	PMUX_PINGRP_PBB0,
	PMUX_PINGRP_CAM_I2C_SCL_PBB1,
	PMUX_PINGRP_CAM_I2C_SDA_PBB2,
	PMUX_PINGRP_PBB3,
	PMUX_PINGRP_PBB4,
	PMUX_PINGRP_PBB5,
	PMUX_PINGRP_PBB6,
	PMUX_PINGRP_PBB7,
	PMUX_PINGRP_PCC2,
	PMUX_PINGRP_JTAG_RTCK,
	PMUX_PINGRP_PWR_I2C_SCL_PZ6,
	PMUX_PINGRP_PWR_I2C_SDA_PZ7,
	PMUX_PINGRP_KB_ROW0_PR0,
	PMUX_PINGRP_KB_ROW1_PR1,
	PMUX_PINGRP_KB_ROW2_PR2,
	PMUX_PINGRP_KB_ROW3_PR3,
	PMUX_PINGRP_KB_ROW4_PR4,
	PMUX_PINGRP_KB_ROW5_PR5,
	PMUX_PINGRP_KB_ROW6_PR6,
	PMUX_PINGRP_KB_ROW7_PR7,
	PMUX_PINGRP_KB_ROW8_PS0,
	PMUX_PINGRP_KB_ROW9_PS1,
	PMUX_PINGRP_KB_ROW10_PS2,
	PMUX_PINGRP_KB_COL0_PQ0 = (0x2fc / 4),
	PMUX_PINGRP_KB_COL1_PQ1,
	PMUX_PINGRP_KB_COL2_PQ2,
	PMUX_PINGRP_KB_COL3_PQ3,
	PMUX_PINGRP_KB_COL4_PQ4,
	PMUX_PINGRP_KB_COL5_PQ5,
	PMUX_PINGRP_KB_COL6_PQ6,
	PMUX_PINGRP_KB_COL7_PQ7,
	PMUX_PINGRP_CLK_32K_OUT_PA0,
	PMUX_PINGRP_SYS_CLK_REQ_PZ5,
	PMUX_PINGRP_CORE_PWR_REQ,
	PMUX_PINGRP_CPU_PWR_REQ,
	PMUX_PINGRP_PWR_INT_N,
	PMUX_PINGRP_CLK_32K_IN,
	PMUX_PINGRP_OWR,
	PMUX_PINGRP_DAP1_FS_PN0,
	PMUX_PINGRP_DAP1_DIN_PN1,
	PMUX_PINGRP_DAP1_DOUT_PN2,
	PMUX_PINGRP_DAP1_SCLK_PN3,
	PMUX_PINGRP_CLK1_REQ_PEE2,
	PMUX_PINGRP_CLK1_OUT_PW4,
	PMUX_PINGRP_SPDIF_IN_PK6,
	PMUX_PINGRP_SPDIF_OUT_PK5,
	PMUX_PINGRP_DAP2_FS_PA2,
	PMUX_PINGRP_DAP2_DIN_PA4,
	PMUX_PINGRP_DAP2_DOUT_PA5,
	PMUX_PINGRP_DAP2_SCLK_PA3,
	PMUX_PINGRP_DVFS_PWM_PX0,
	PMUX_PINGRP_GPIO_X1_AUD_PX1,
	PMUX_PINGRP_GPIO_X3_AUD_PX3,
	PMUX_PINGRP_DVFS_CLK_PX2,
	PMUX_PINGRP_GPIO_X4_AUD_PX4,
	PMUX_PINGRP_GPIO_X5_AUD_PX5,
	PMUX_PINGRP_GPIO_X6_AUD_PX6,
	PMUX_PINGRP_GPIO_X7_AUD_PX7,
	PMUX_PINGRP_SDMMC3_CLK_PA6 = (0x390 / 4),
	PMUX_PINGRP_SDMMC3_CMD_PA7,
	PMUX_PINGRP_SDMMC3_DAT0_PB7,
	PMUX_PINGRP_SDMMC3_DAT1_PB6,
	PMUX_PINGRP_SDMMC3_DAT2_PB5,
	PMUX_PINGRP_SDMMC3_DAT3_PB4,
	PMUX_PINGRP_HDMI_CEC_PEE3 = (0x3e0 / 4),
	PMUX_PINGRP_SDMMC1_WP_N_PV3,
	PMUX_PINGRP_SDMMC3_CD_N_PV2,
	PMUX_PINGRP_GPIO_W2_AUD_PW2,
	PMUX_PINGRP_GPIO_W3_AUD_PW3,
	PMUX_PINGRP_USB_VBUS_EN0_PN4,
	PMUX_PINGRP_USB_VBUS_EN1_PN5,
	PMUX_PINGRP_SDMMC3_CLK_LB_IN_PEE5,
	PMUX_PINGRP_SDMMC3_CLK_LB_OUT_PEE4,
	PMUX_PINGRP_GMI_CLK_LB,
	PMUX_PINGRP_RESET_OUT_N,
	PMUX_PINGRP_COUNT,
};

enum pmux_drvgrp {
	PMUX_DRVGRP_AO1,
	PMUX_DRVGRP_AO2,
	PMUX_DRVGRP_AT1,
	PMUX_DRVGRP_AT2,
	PMUX_DRVGRP_AT3,
	PMUX_DRVGRP_AT4,
	PMUX_DRVGRP_AT5,
	PMUX_DRVGRP_CDEV1,
	PMUX_DRVGRP_CDEV2,
	PMUX_DRVGRP_DAP1 = (0x28 / 4),
	PMUX_DRVGRP_DAP2,
	PMUX_DRVGRP_DAP3,
	PMUX_DRVGRP_DAP4,
	PMUX_DRVGRP_DBG,
	PMUX_DRVGRP_SDIO3 = (0x48 / 4),
	PMUX_DRVGRP_SPI,
	PMUX_DRVGRP_UAA,
	PMUX_DRVGRP_UAB,
	PMUX_DRVGRP_UART2,
	PMUX_DRVGRP_UART3,
	PMUX_DRVGRP_SDIO1 = (0x84 / 4),
	PMUX_DRVGRP_DDC = (0x94 / 4),
	PMUX_DRVGRP_GMA,
	PMUX_DRVGRP_GME = (0xa8 / 4),
	PMUX_DRVGRP_GMF,
	PMUX_DRVGRP_GMG,
	PMUX_DRVGRP_GMH,
	PMUX_DRVGRP_OWR,
	PMUX_DRVGRP_UDA,
	PMUX_DRVGRP_DEV3 = (0xc4 / 4),
	PMUX_DRVGRP_CEC = (0xd0 / 4),
	PMUX_DRVGRP_AT6 = (0x12c / 4),
	PMUX_DRVGRP_DAP5,
	PMUX_DRVGRP_USB_VBUS_EN,
	PMUX_DRVGRP_AO3,
	PMUX_DRVGRP_HV0,
	PMUX_DRVGRP_SDIO4,
	PMUX_DRVGRP_AO0,
	PMUX_DRVGRP_COUNT,
};

enum pmux_func {
	PMUX_FUNC_DEFAULT,
	PMUX_FUNC_BLINK,
	PMUX_FUNC_CEC,
	PMUX_FUNC_CLDVFS,
	PMUX_FUNC_CLK,
	PMUX_FUNC_CLK12,
	PMUX_FUNC_CPU,
	PMUX_FUNC_DAP,
	PMUX_FUNC_DAP1,
	PMUX_FUNC_DAP2,
	PMUX_FUNC_DEV3,
	PMUX_FUNC_DISPLAYA,
	PMUX_FUNC_DISPLAYA_ALT,
	PMUX_FUNC_DISPLAYB,
	PMUX_FUNC_DTV,
	PMUX_FUNC_EMC_DLL,
	PMUX_FUNC_EXTPERIPH1,
	PMUX_FUNC_EXTPERIPH2,
	PMUX_FUNC_EXTPERIPH3,
	PMUX_FUNC_GMI,
	PMUX_FUNC_GMI_ALT,
	PMUX_FUNC_HDA,
	PMUX_FUNC_HSI,
	PMUX_FUNC_I2C1,
	PMUX_FUNC_I2C2,
	PMUX_FUNC_I2C3,
	PMUX_FUNC_I2C4,
	PMUX_FUNC_I2CPWR,
	PMUX_FUNC_I2S0,
	PMUX_FUNC_I2S1,
	PMUX_FUNC_I2S2,
	PMUX_FUNC_I2S3,
	PMUX_FUNC_I2S4,
	PMUX_FUNC_IRDA,
	PMUX_FUNC_KBC,
	PMUX_FUNC_NAND,
	PMUX_FUNC_NAND_ALT,
	PMUX_FUNC_OWR,
	PMUX_FUNC_PMI,
	PMUX_FUNC_PWM0,
	PMUX_FUNC_PWM1,
	PMUX_FUNC_PWM2,
	PMUX_FUNC_PWM3,
	PMUX_FUNC_PWRON,
	PMUX_FUNC_RESET_OUT_N,
	PMUX_FUNC_RTCK,
	PMUX_FUNC_SDMMC1,
	PMUX_FUNC_SDMMC2,
	PMUX_FUNC_SDMMC3,
	PMUX_FUNC_SDMMC4,
	PMUX_FUNC_SOC,
	PMUX_FUNC_SPDIF,
	PMUX_FUNC_SPI1,
	PMUX_FUNC_SPI2,
	PMUX_FUNC_SPI3,
	PMUX_FUNC_SPI4,
	PMUX_FUNC_SPI5,
	PMUX_FUNC_SPI6,
	PMUX_FUNC_SYSCLK,
	PMUX_FUNC_TRACE,
	PMUX_FUNC_UARTA,
	PMUX_FUNC_UARTB,
	PMUX_FUNC_UARTC,
	PMUX_FUNC_UARTD,
	PMUX_FUNC_ULPI,
	PMUX_FUNC_USB,
	PMUX_FUNC_VGP1,
	PMUX_FUNC_VGP2,
	PMUX_FUNC_VGP3,
	PMUX_FUNC_VGP4,
	PMUX_FUNC_VGP5,
	PMUX_FUNC_VGP6,
	PMUX_FUNC_VI,
	PMUX_FUNC_VI_ALT1,
	PMUX_FUNC_VI_ALT3,
	PMUX_FUNC_RSVD1,
	PMUX_FUNC_RSVD2,
	PMUX_FUNC_RSVD3,
	PMUX_FUNC_RSVD4,
	PMUX_FUNC_COUNT,
};

static const char * const tegra_pinctrl_to_pingrp[] = {
	[PMUX_PINGRP_ULPI_DATA0_PO1] = "ulpi_data0_po1",
	[PMUX_PINGRP_ULPI_DATA1_PO2] = "ulpi_data1_po2",
	[PMUX_PINGRP_ULPI_DATA2_PO3] = "ulpi_data2_po3",
	[PMUX_PINGRP_ULPI_DATA3_PO4] = "ulpi_data3_po4",
	[PMUX_PINGRP_ULPI_DATA4_PO5] = "ulpi_data4_po5",
	[PMUX_PINGRP_ULPI_DATA5_PO6] = "ulpi_data5_po6",
	[PMUX_PINGRP_ULPI_DATA6_PO7] = "ulpi_data6_po7",
	[PMUX_PINGRP_ULPI_DATA7_PO0] = "ulpi_data7_po0",
	[PMUX_PINGRP_ULPI_CLK_PY0] = "ulpi_clk_py0",
	[PMUX_PINGRP_ULPI_DIR_PY1] = "ulpi_dir_py1",
	[PMUX_PINGRP_ULPI_NXT_PY2] = "ulpi_nxt_py2",
	[PMUX_PINGRP_ULPI_STP_PY3] = "ulpi_stp_py3",
	[PMUX_PINGRP_DAP3_FS_PP0] = "dap3_fs_pp0",
	[PMUX_PINGRP_DAP3_DIN_PP1] = "dap3_din_pp1",
	[PMUX_PINGRP_DAP3_DOUT_PP2] = "dap3_dout_pp2",
	[PMUX_PINGRP_DAP3_SCLK_PP3] = "dap3_sclk_pp3",
	[PMUX_PINGRP_PV0] = "pv0",
	[PMUX_PINGRP_PV1] = "pv1",
	[PMUX_PINGRP_SDMMC1_CLK_PZ0] = "sdmmc1_clk_pz0",
	[PMUX_PINGRP_SDMMC1_CMD_PZ1] = "sdmmc1_cmd_pz1",
	[PMUX_PINGRP_SDMMC1_DAT3_PY4] = "sdmmc1_dat3_py4",
	[PMUX_PINGRP_SDMMC1_DAT2_PY5] = "sdmmc1_dat2_py5",
	[PMUX_PINGRP_SDMMC1_DAT1_PY6] = "sdmmc1_dat1_py6",
	[PMUX_PINGRP_SDMMC1_DAT0_PY7] = "sdmmc1_dat0_py7",
	[PMUX_PINGRP_CLK2_OUT_PW5] = "clk2_out_pw5",
	[PMUX_PINGRP_CLK2_REQ_PCC5] = "clk2_req_pcc5",
	[PMUX_PINGRP_HDMI_INT_PN7] = "hdmi_int_pn7",
	[PMUX_PINGRP_DDC_SCL_PV4] = "ddc_scl_pv4",
	[PMUX_PINGRP_DDC_SDA_PV5] = "ddc_sda_pv5",
	[PMUX_PINGRP_UART2_RXD_PC3] = "uart2_rxd_pc3",
	[PMUX_PINGRP_UART2_TXD_PC2] = "uart2_txd_pc2",
	[PMUX_PINGRP_UART2_RTS_N_PJ6] = "uart2_rts_n_pj6",
	[PMUX_PINGRP_UART2_CTS_N_PJ5] = "uart2_cts_n_pj5",
	[PMUX_PINGRP_UART3_TXD_PW6] = "uart3_txd_pw6",
	[PMUX_PINGRP_UART3_RXD_PW7] = "uart3_rxd_pw7",
	[PMUX_PINGRP_UART3_CTS_N_PA1] = "uart3_cts_n_pa1",
	[PMUX_PINGRP_UART3_RTS_N_PC0] = "uart3_rts_n_pc0",
	[PMUX_PINGRP_PU0] = "pu0",
	[PMUX_PINGRP_PU1] = "pu1",
	[PMUX_PINGRP_PU2] = "pu2",
	[PMUX_PINGRP_PU3] = "pu3",
	[PMUX_PINGRP_PU4] = "pu4",
	[PMUX_PINGRP_PU5] = "pu5",
	[PMUX_PINGRP_PU6] = "pu6",
	[PMUX_PINGRP_GEN1_I2C_SDA_PC5] = "gen1_i2c_sda_pc5",
	[PMUX_PINGRP_GEN1_I2C_SCL_PC4] = "gen1_i2c_scl_pc4",
	[PMUX_PINGRP_DAP4_FS_PP4] = "dap4_fs_pp4",
	[PMUX_PINGRP_DAP4_DIN_PP5] = "dap4_din_pp5",
	[PMUX_PINGRP_DAP4_DOUT_PP6] = "dap4_dout_pp6",
	[PMUX_PINGRP_DAP4_SCLK_PP7] = "dap4_sclk_pp7",
	[PMUX_PINGRP_CLK3_OUT_PEE0] = "clk3_out_pee0",
	[PMUX_PINGRP_CLK3_REQ_PEE1] = "clk3_req_pee1",
	[PMUX_PINGRP_GMI_WP_N_PC7] = "gmi_wp_n_pc7",
	[PMUX_PINGRP_GMI_IORDY_PI5] = "gmi_iordy_pi5",
	[PMUX_PINGRP_GMI_WAIT_PI7] = "gmi_wait_pi7",
	[PMUX_PINGRP_GMI_ADV_N_PK0] = "gmi_adv_n_pk0",
	[PMUX_PINGRP_GMI_CLK_PK1] = "gmi_clk_pk1",
	[PMUX_PINGRP_GMI_CS0_N_PJ0] = "gmi_cs0_n_pj0",
	[PMUX_PINGRP_GMI_CS1_N_PJ2] = "gmi_cs1_n_pj2",
	[PMUX_PINGRP_GMI_CS2_N_PK3] = "gmi_cs2_n_pk3",
	[PMUX_PINGRP_GMI_CS3_N_PK4] = "gmi_cs3_n_pk4",
	[PMUX_PINGRP_GMI_CS4_N_PK2] = "gmi_cs4_n_pk2",
	[PMUX_PINGRP_GMI_CS6_N_PI3] = "gmi_cs6_n_pi3",
	[PMUX_PINGRP_GMI_CS7_N_PI6] = "gmi_cs7_n_pi6",
	[PMUX_PINGRP_GMI_AD0_PG0] = "gmi_ad0_pg0",
	[PMUX_PINGRP_GMI_AD1_PG1] = "gmi_ad1_pg1",
	[PMUX_PINGRP_GMI_AD2_PG2] = "gmi_ad2_pg2",
	[PMUX_PINGRP_GMI_AD3_PG3] = "gmi_ad3_pg3",
	[PMUX_PINGRP_GMI_AD4_PG4] = "gmi_ad4_pg4",
	[PMUX_PINGRP_GMI_AD5_PG5] = "gmi_ad5_pg5",
	[PMUX_PINGRP_GMI_AD6_PG6] = "gmi_ad6_pg6",
	[PMUX_PINGRP_GMI_AD7_PG7] = "gmi_ad7_pg7",
	[PMUX_PINGRP_GMI_AD8_PH0] = "gmi_ad8_ph0",
	[PMUX_PINGRP_GMI_AD9_PH1] = "gmi_ad9_ph1",
	[PMUX_PINGRP_GMI_AD10_PH2] = "gmi_ad10_ph2",
	[PMUX_PINGRP_GMI_AD11_PH3] = "gmi_ad11_ph3",
	[PMUX_PINGRP_GMI_AD12_PH4] = "gmi_ad12_ph4",
	[PMUX_PINGRP_GMI_AD13_PH5] = "gmi_ad13_ph5",
	[PMUX_PINGRP_GMI_AD14_PH6] = "gmi_ad14_ph6",
	[PMUX_PINGRP_GMI_AD15_PH7] = "gmi_ad15_ph7",
	[PMUX_PINGRP_GMI_A16_PJ7] = "gmi_a16_pj7",
	[PMUX_PINGRP_GMI_A17_PB0] = "gmi_a17_pb0",
	[PMUX_PINGRP_GMI_A18_PB1] = "gmi_a18_pb1",
	[PMUX_PINGRP_GMI_A19_PK7] = "gmi_a19_pk7",
	[PMUX_PINGRP_GMI_WR_N_PI0] = "gmi_wr_n_pi0",
	[PMUX_PINGRP_GMI_OE_N_PI1] = "gmi_oe_n_pi1",
	[PMUX_PINGRP_GMI_DQS_P_PJ3] = "gmi_dqs_p_pj3",
	[PMUX_PINGRP_GMI_RST_N_PI4] = "gmi_rst_n_pi4",
	[PMUX_PINGRP_GEN2_I2C_SCL_PT5] = "gen2_i2c_scl_pt5",
	[PMUX_PINGRP_GEN2_I2C_SDA_PT6] = "gen2_i2c_sda_pt6",
	[PMUX_PINGRP_SDMMC4_CLK_PCC4] = "sdmmc4_clk_pcc4",
	[PMUX_PINGRP_SDMMC4_CMD_PT7] = "sdmmc4_cmd_pt7",
	[PMUX_PINGRP_SDMMC4_DAT0_PAA0] = "sdmmc4_dat0_paa0",
	[PMUX_PINGRP_SDMMC4_DAT1_PAA1] = "sdmmc4_dat1_paa1",
	[PMUX_PINGRP_SDMMC4_DAT2_PAA2] = "sdmmc4_dat2_paa2",
	[PMUX_PINGRP_SDMMC4_DAT3_PAA3] = "sdmmc4_dat3_paa3",
	[PMUX_PINGRP_SDMMC4_DAT4_PAA4] = "sdmmc4_dat4_paa4",
	[PMUX_PINGRP_SDMMC4_DAT5_PAA5] = "sdmmc4_dat5_paa5",
	[PMUX_PINGRP_SDMMC4_DAT6_PAA6] = "sdmmc4_dat6_paa6",
	[PMUX_PINGRP_SDMMC4_DAT7_PAA7] = "sdmmc4_dat7_paa7",
	[PMUX_PINGRP_CAM_MCLK_PCC0] = "cam_mclk_pcc0",
	[PMUX_PINGRP_PCC1] = "pcc1",
	[PMUX_PINGRP_PBB0] = "pbb0",
	[PMUX_PINGRP_CAM_I2C_SCL_PBB1] = "cam_i2c_scl_pbb1",
	[PMUX_PINGRP_CAM_I2C_SDA_PBB2] = "cam_i2c_sda_pbb2",
	[PMUX_PINGRP_PBB3] = "pbb3",
	[PMUX_PINGRP_PBB4] = "pbb4",
	[PMUX_PINGRP_PBB5] = "pbb5",
	[PMUX_PINGRP_PBB6] = "pbb6",
	[PMUX_PINGRP_PBB7] = "pbb7",
	[PMUX_PINGRP_PCC2] = "pcc2",
	[PMUX_PINGRP_JTAG_RTCK] = "jtag_rtck",
	[PMUX_PINGRP_PWR_I2C_SCL_PZ6] = "pwr_i2c_scl_pz6",
	[PMUX_PINGRP_PWR_I2C_SDA_PZ7] = "pwr_i2c_sda_pz7",
	[PMUX_PINGRP_KB_ROW0_PR0] = "kb_row0_pr0",
	[PMUX_PINGRP_KB_ROW1_PR1] = "kb_row1_pr1",
	[PMUX_PINGRP_KB_ROW2_PR2] = "kb_row2_pr2",
	[PMUX_PINGRP_KB_ROW3_PR3] = "kb_row3_pr3",
	[PMUX_PINGRP_KB_ROW4_PR4] = "kb_row4_pr4",
	[PMUX_PINGRP_KB_ROW5_PR5] = "kb_row5_pr5",
	[PMUX_PINGRP_KB_ROW6_PR6] = "kb_row6_pr6",
	[PMUX_PINGRP_KB_ROW7_PR7] = "kb_row7_pr7",
	[PMUX_PINGRP_KB_ROW8_PS0] = "kb_row8_ps0",
	[PMUX_PINGRP_KB_ROW9_PS1] = "kb_row9_ps1",
	[PMUX_PINGRP_KB_ROW10_PS2] = "kb_row10_ps2",
	[PMUX_PINGRP_KB_COL0_PQ0] = "kb_col0_pq0",
	[PMUX_PINGRP_KB_COL1_PQ1] = "kb_col1_pq1",
	[PMUX_PINGRP_KB_COL2_PQ2] = "kb_col2_pq2",
	[PMUX_PINGRP_KB_COL3_PQ3] = "kb_col3_pq3",
	[PMUX_PINGRP_KB_COL4_PQ4] = "kb_col4_pq4",
	[PMUX_PINGRP_KB_COL5_PQ5] = "kb_col5_pq5",
	[PMUX_PINGRP_KB_COL6_PQ6] = "kb_col6_pq6",
	[PMUX_PINGRP_KB_COL7_PQ7] = "kb_col7_pq7",
	[PMUX_PINGRP_CLK_32K_OUT_PA0] = "clk_32k_out_pa0",
	[PMUX_PINGRP_SYS_CLK_REQ_PZ5] = "sys_clk_req_pz5",
	[PMUX_PINGRP_CORE_PWR_REQ] = "core_pwr_req",
	[PMUX_PINGRP_CPU_PWR_REQ] = "cpu_pwr_req",
	[PMUX_PINGRP_PWR_INT_N] = "pwr_int_n",
	[PMUX_PINGRP_CLK_32K_IN] = "clk_32k_in",
	[PMUX_PINGRP_OWR] = "owr",
	[PMUX_PINGRP_DAP1_FS_PN0] = "dap1_fs_pn0",
	[PMUX_PINGRP_DAP1_DIN_PN1] = "dap1_din_pn1",
	[PMUX_PINGRP_DAP1_DOUT_PN2] = "dap1_dout_pn2",
	[PMUX_PINGRP_DAP1_SCLK_PN3] = "dap1_sclk_pn3",
	[PMUX_PINGRP_CLK1_REQ_PEE2] = "clk1_req_pee2",
	[PMUX_PINGRP_CLK1_OUT_PW4] = "clk1_out_pw4",
	[PMUX_PINGRP_SPDIF_IN_PK6] = "spdif_in_pk6",
	[PMUX_PINGRP_SPDIF_OUT_PK5] = "spdif_out_pk5",
	[PMUX_PINGRP_DAP2_FS_PA2] = "dap2_fs_pa2",
	[PMUX_PINGRP_DAP2_DIN_PA4] = "dap2_din_pa4",
	[PMUX_PINGRP_DAP2_DOUT_PA5] = "dap2_dout_pa5",
	[PMUX_PINGRP_DAP2_SCLK_PA3] = "dap2_sclk_pa3",
	[PMUX_PINGRP_DVFS_PWM_PX0] = "dvfs_pwm_px0",
	[PMUX_PINGRP_GPIO_X1_AUD_PX1] = "gpio_x1_aud_px1",
	[PMUX_PINGRP_GPIO_X3_AUD_PX3] = "gpio_x3_aud_px3",
	[PMUX_PINGRP_DVFS_CLK_PX2] = "dvfs_clk_px2",
	[PMUX_PINGRP_GPIO_X4_AUD_PX4] = "gpio_x4_aud_px4",
	[PMUX_PINGRP_GPIO_X5_AUD_PX5] = "gpio_x5_aud_px5",
	[PMUX_PINGRP_GPIO_X6_AUD_PX6] = "gpio_x6_aud_px6",
	[PMUX_PINGRP_GPIO_X7_AUD_PX7] = "gpio_x7_aud_px7",
	[PMUX_PINGRP_SDMMC3_CLK_PA6] = "sdmmc3_clk_pa6",
	[PMUX_PINGRP_SDMMC3_CMD_PA7] = "sdmmc3_cmd_pa7",
	[PMUX_PINGRP_SDMMC3_DAT0_PB7] = "sdmmc3_dat0_pb7",
	[PMUX_PINGRP_SDMMC3_DAT1_PB6] = "sdmmc3_dat1_pb6",
	[PMUX_PINGRP_SDMMC3_DAT2_PB5] = "sdmmc3_dat2_pb5",
	[PMUX_PINGRP_SDMMC3_DAT3_PB4] = "sdmmc3_dat3_pb4",
	[PMUX_PINGRP_HDMI_CEC_PEE3] = "hdmi_cec_pee3",
	[PMUX_PINGRP_SDMMC1_WP_N_PV3] = "sdmmc1_wp_n_pv3",
	[PMUX_PINGRP_SDMMC3_CD_N_PV2] = "sdmmc3_cd_n_pv2",
	[PMUX_PINGRP_GPIO_W2_AUD_PW2] = "gpio_w2_aud_pw2",
	[PMUX_PINGRP_GPIO_W3_AUD_PW3] = "gpio_w3_aud_pw3",
	[PMUX_PINGRP_USB_VBUS_EN0_PN4] = "usb_vbus_en0_pn4",
	[PMUX_PINGRP_USB_VBUS_EN1_PN5] = "usb_vbus_en1_pn5",
	[PMUX_PINGRP_SDMMC3_CLK_LB_IN_PEE5] = "sdmmc3_clk_lb_in_pee5",
	[PMUX_PINGRP_SDMMC3_CLK_LB_OUT_PEE4] = "sdmmc3_clk_lb_out_pee4",
	[PMUX_PINGRP_GMI_CLK_LB] = "gmi_clk_lb",
	[PMUX_PINGRP_RESET_OUT_N] = "reset_out_n",
};

static const char * const tegra_pinctrl_to_drvgrp[] = {
	[PMUX_DRVGRP_AO1] = "drive_ao1",
	[PMUX_DRVGRP_AO2] = "drive_ao2",
	[PMUX_DRVGRP_AT1] = "drive_at1",
	[PMUX_DRVGRP_AT2] = "drive_at2",
	[PMUX_DRVGRP_AT3] = "drive_at3",
	[PMUX_DRVGRP_AT4] = "drive_at4",
	[PMUX_DRVGRP_AT5] = "drive_at5",
	[PMUX_DRVGRP_CDEV1] = "drive_cdev1",
	[PMUX_DRVGRP_CDEV2] = "drive_cdev2",
	[PMUX_DRVGRP_DAP1] = "drive_dap1",
	[PMUX_DRVGRP_DAP2] = "drive_dap2",
	[PMUX_DRVGRP_DAP3] = "drive_dap3",
	[PMUX_DRVGRP_DAP4] = "drive_dap4",
	[PMUX_DRVGRP_DBG] = "drive_dbg",
	[PMUX_DRVGRP_SDIO3] = "drive_sdio3",
	[PMUX_DRVGRP_SPI] = "drive_spi",
	[PMUX_DRVGRP_UAA] = "drive_uaa",
	[PMUX_DRVGRP_UAB] = "drive_uab",
	[PMUX_DRVGRP_UART2] = "drive_uart2",
	[PMUX_DRVGRP_UART3] = "drive_uart3",
	[PMUX_DRVGRP_SDIO1] = "drive_sdio1",
	[PMUX_DRVGRP_DDC] = "drive_ddc",
	[PMUX_DRVGRP_GMA] = "drive_gma",
	[PMUX_DRVGRP_GME] = "drive_gme",
	[PMUX_DRVGRP_GMF] = "drive_gmf",
	[PMUX_DRVGRP_GMG] = "drive_gmg",
	[PMUX_DRVGRP_GMH] = "drive_gmh",
	[PMUX_DRVGRP_OWR] = "drive_owr",
	[PMUX_DRVGRP_UDA] = "drive_uda",
	[PMUX_DRVGRP_DEV3] = "drive_dev3",
	[PMUX_DRVGRP_CEC] = "drive_cec",
	[PMUX_DRVGRP_AT6] = "drive_at6",
	[PMUX_DRVGRP_DAP5] = "drive_dap5",
	[PMUX_DRVGRP_USB_VBUS_EN] = "drive_usb_vbus_en",
	[PMUX_DRVGRP_AO3] = "drive_ao3",
	[PMUX_DRVGRP_HV0] = "drive_hv0",
	[PMUX_DRVGRP_SDIO4] = "drive_sdio4",
	[PMUX_DRVGRP_AO0] = "drive_ao0",
};

static const char * const tegra_pinctrl_to_func[] = {
	[PMUX_FUNC_DEFAULT] = "default",
	[PMUX_FUNC_BLINK] = "blink",
	[PMUX_FUNC_CEC] = "cec",
	[PMUX_FUNC_CLDVFS] = "cldvfs",
	[PMUX_FUNC_CLK] = "clk",
	[PMUX_FUNC_CLK12] = "clk12",
	[PMUX_FUNC_CPU] = "cpu",
	[PMUX_FUNC_DAP] = "dap",
	[PMUX_FUNC_DAP1] = "dap1",
	[PMUX_FUNC_DAP2] = "dap2",
	[PMUX_FUNC_DEV3] = "dev3",
	[PMUX_FUNC_DISPLAYA] = "displaya",
	[PMUX_FUNC_DISPLAYA_ALT] = "displaya_alt",
	[PMUX_FUNC_DISPLAYB] = "displayb",
	[PMUX_FUNC_DTV] = "dtv",
	[PMUX_FUNC_EMC_DLL] = "emc_dll",
	[PMUX_FUNC_EXTPERIPH1] = "extperiph1",
	[PMUX_FUNC_EXTPERIPH2] = "extperiph2",
	[PMUX_FUNC_EXTPERIPH3] = "extperiph3",
	[PMUX_FUNC_GMI] = "gmi",
	[PMUX_FUNC_GMI_ALT] = "gmi_alt",
	[PMUX_FUNC_HDA] = "hda",
	[PMUX_FUNC_HSI] = "hsi",
	[PMUX_FUNC_I2C1] = "i2c1",
	[PMUX_FUNC_I2C2] = "i2c2",
	[PMUX_FUNC_I2C3] = "i2c3",
	[PMUX_FUNC_I2C4] = "i2c4",
	[PMUX_FUNC_I2CPWR] = "i2cpwr",
	[PMUX_FUNC_I2S0] = "i2s0",
	[PMUX_FUNC_I2S1] = "i2s1",
	[PMUX_FUNC_I2S2] = "i2s2",
	[PMUX_FUNC_I2S3] = "i2s3",
	[PMUX_FUNC_I2S4] = "i2s4",
	[PMUX_FUNC_IRDA] = "irda",
	[PMUX_FUNC_KBC] = "kbc",
	[PMUX_FUNC_NAND] = "nand",
	[PMUX_FUNC_NAND_ALT] = "nand_alt",
	[PMUX_FUNC_OWR] = "owr",
	[PMUX_FUNC_PMI] = "pmi",
	[PMUX_FUNC_PWM0] = "pwm0",
	[PMUX_FUNC_PWM1] = "pwm1",
	[PMUX_FUNC_PWM2] = "pwm2",
	[PMUX_FUNC_PWM3] = "pwm3",
	[PMUX_FUNC_PWRON] = "pwron",
	[PMUX_FUNC_RESET_OUT_N] = "reset_out_n",
	[PMUX_FUNC_RTCK] = "rtck",
	[PMUX_FUNC_SDMMC1] = "sdmmc1",
	[PMUX_FUNC_SDMMC2] = "sdmmc2",
	[PMUX_FUNC_SDMMC3] = "sdmmc3",
	[PMUX_FUNC_SDMMC4] = "sdmmc4",
	[PMUX_FUNC_SOC] = "soc",
	[PMUX_FUNC_SPDIF] = "spdif",
	[PMUX_FUNC_SPI1] = "spi1",
	[PMUX_FUNC_SPI2] = "spi2",
	[PMUX_FUNC_SPI3] = "spi3",
	[PMUX_FUNC_SPI4] = "spi4",
	[PMUX_FUNC_SPI5] = "spi5",
	[PMUX_FUNC_SPI6] = "spi6",
	[PMUX_FUNC_SYSCLK] = "sysclk",
	[PMUX_FUNC_TRACE] = "trace",
	[PMUX_FUNC_UARTA] = "uarta",
	[PMUX_FUNC_UARTB] = "uartb",
	[PMUX_FUNC_UARTC] = "uartc",
	[PMUX_FUNC_UARTD] = "uartd",
	[PMUX_FUNC_ULPI] = "ulpi",
	[PMUX_FUNC_USB] = "usb",
	[PMUX_FUNC_VGP1] = "vgp1",
	[PMUX_FUNC_VGP2] = "vgp2",
	[PMUX_FUNC_VGP3] = "vgp3",
	[PMUX_FUNC_VGP4] = "vgp4",
	[PMUX_FUNC_VGP5] = "vgp5",
	[PMUX_FUNC_VGP6] = "vgp6",
	[PMUX_FUNC_VI] = "vi",
	[PMUX_FUNC_VI_ALT1] = "vi_alt1",
	[PMUX_FUNC_VI_ALT3] = "vi_alt3",
	[PMUX_FUNC_RSVD1] = "rsvd1",
	[PMUX_FUNC_RSVD2] = "rsvd2",
	[PMUX_FUNC_RSVD3] = "rsvd3",
	[PMUX_FUNC_RSVD4] = "rsvd4",
};

#define TEGRA_PMX_SOC_DRV_GROUP_BASE_REG 0x868
#define TEGRA_PMX_SOC_HAS_IO_CLAMPING
#define TEGRA_PMX_SOC_HAS_DRVGRPS
#define TEGRA_PMX_GRPS_HAVE_LPMD
#define TEGRA_PMX_GRPS_HAVE_SCHMT
#define TEGRA_PMX_GRPS_HAVE_HSM
#define TEGRA_PMX_PINS_HAVE_E_INPUT
#define TEGRA_PMX_PINS_HAVE_LOCK
#define TEGRA_PMX_PINS_HAVE_OD
#define TEGRA_PMX_PINS_HAVE_IO_RESET
#define TEGRA_PMX_PINS_HAVE_RCV_SEL
#include <asm/arch-tegra/pinmux.h>

#endif /* _TEGRA114_PINMUX_H_ */