/*
 * Copyright (C) 2025 Texas Instruments Incorporated - https://www.ti.com
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef SOC_AM62LX_CLOCKS_H
#define SOC_AM62LX_CLOCKS_H

#define AM62LX_DEV_ADC0_ADC_CLK 0
#define AM62LX_DEV_ADC0_ADC_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 1
#define AM62LX_DEV_ADC0_ADC_CLK_PARENT_SAM62_PLL_CTRL_WRAP_WKUP_0_CHIP_DIV1_CLK_CLK12 2
#define AM62LX_DEV_ADC0_ADC_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT8_CLK 3
#define AM62LX_DEV_ADC0_ADC_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 4
#define AM62LX_DEV_ADC0_SYS_CLK 5
#define AM62LX_DEV_ADC0_VBUS_CLK 6

#define AM62LX_DEV_MAIN_GPIOMUX_INTROUTER0_INTR_CLK 0

#define AM62LX_DEV_TIMESYNC_INTROUTER0_INTR_CLK 0

#define AM62LX_DEV_CPSW0_CPPI_CLK_CLK 0
#define AM62LX_DEV_CPSW0_CPTS_GENF0 1
#define AM62LX_DEV_CPSW0_CPTS_GENF1 2
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK 3
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 4
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK 5
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_BOARD_0_CP_GEMAC_CPTS0_RFT_CLK_OUT 6
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_CLK_32K_RC_SEL_OUT0 7
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 8
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 9
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_SAM62_PLL_CTRL_WRAP_WKUP_0_CHIP_DIV1_CLK_CLK 10
#define AM62LX_DEV_CPSW0_CPTS_RFT_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT0_CLK 11
#define AM62LX_DEV_CPSW0_GMII1_MR_CLK 12
#define AM62LX_DEV_CPSW0_GMII1_MT_CLK 13
#define AM62LX_DEV_CPSW0_GMII2_MR_CLK 14
#define AM62LX_DEV_CPSW0_GMII2_MT_CLK 15
#define AM62LX_DEV_CPSW0_GMII_RFT_CLK 16
#define AM62LX_DEV_CPSW0_MDIO_MDCLK_O 17
#define AM62LX_DEV_CPSW0_RGMII_MHZ_250_CLK 18
#define AM62LX_DEV_CPSW0_RGMII_MHZ_50_CLK 19
#define AM62LX_DEV_CPSW0_RGMII_MHZ_5_CLK 20
#define AM62LX_DEV_CPSW0_RMII1_MHZ_50_CLK 21
#define AM62LX_DEV_CPSW0_RMII2_MHZ_50_CLK 22

#define AM62LX_DEV_CPT2_AGGR0_VCLK_CLK 0

#define AM62LX_DEV_CPT2_AGGR1_VCLK_CLK 0

#define AM62LX_DEV_WKUP_CPT2_AGGR0_VCLK_CLK 0

#define AM62LX_DEV_STM0_ATB_CLK 0
#define AM62LX_DEV_STM0_CORE_CLK 1
#define AM62LX_DEV_STM0_VBUSP_CLK 2

#define AM62LX_DEV_DEBUGSS_WRAP0_ATB_CLK 0
#define AM62LX_DEV_DEBUGSS_WRAP0_CORE_CLK 1
#define AM62LX_DEV_DEBUGSS_WRAP0_CSTPIU_TRACECLK 2
#define AM62LX_DEV_DEBUGSS_WRAP0_JTAG_TCK 20
#define AM62LX_DEV_DEBUGSS_WRAP0_P1500_WRCK 21
#define AM62LX_DEV_DEBUGSS_WRAP0_TREXPT_CLK 22

#define AM62LX_DEV_DMASS0_BCDMA_0_CLK 0

#define AM62LX_DEV_DMASS0_PKTDMA_0_CLK 0

#define AM62LX_DEV_TIMER0_TIMER_HCLK_CLK 0
#define AM62LX_DEV_TIMER0_TIMER_PWM 1
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK 2
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 3
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_CLK_32K_RC_SEL_OUT0 4
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK 5
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 6
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 7
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 8
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_BOARD_0_CP_GEMAC_CPTS0_RFT_CLK_OUT 10
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT1_CLK 11
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 12
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF0 13
#define AM62LX_DEV_TIMER0_TIMER_TCLK_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF1 14

#define AM62LX_DEV_TIMER1_TIMER_HCLK_CLK 0
#define AM62LX_DEV_TIMER1_TIMER_PWM 1
#define AM62LX_DEV_TIMER1_TIMER_TCLK_CLK 2
#define AM62LX_DEV_TIMER1_TIMER_TCLK_CLK_PARENT_MAIN_TIMERCLKN_SEL_OUT1 3
#define AM62LX_DEV_TIMER1_TIMER_TCLK_CLK_PARENT_DMTIMER_DMC1MS_MAIN_0_TIMER_PWM 4

#define AM62LX_DEV_TIMER2_TIMER_HCLK_CLK 0
#define AM62LX_DEV_TIMER2_TIMER_PWM 1
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK 2
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 3
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_CLK_32K_RC_SEL_OUT0 4
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK 5
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 6
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 7
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 8
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_BOARD_0_CP_GEMAC_CPTS0_RFT_CLK_OUT 10
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT1_CLK 11
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 12
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF0 13
#define AM62LX_DEV_TIMER2_TIMER_TCLK_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF1 14

#define AM62LX_DEV_TIMER3_TIMER_HCLK_CLK 0
#define AM62LX_DEV_TIMER3_TIMER_PWM 1
#define AM62LX_DEV_TIMER3_TIMER_TCLK_CLK 2
#define AM62LX_DEV_TIMER3_TIMER_TCLK_CLK_PARENT_MAIN_TIMERCLKN_SEL_OUT3 3
#define AM62LX_DEV_TIMER3_TIMER_TCLK_CLK_PARENT_DMTIMER_DMC1MS_MAIN_2_TIMER_PWM 4

#define AM62LX_DEV_WKUP_TIMER0_TIMER_HCLK_CLK 0
#define AM62LX_DEV_WKUP_TIMER0_TIMER_PWM 1
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK 2
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 3
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_SAM62_PLL_CTRL_WRAP_WKUP_0_CHIP_DIV1_CLK_CLK2 4
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 5
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 6
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 7
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_CLK_32K_RC_SEL_OUT0 8
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF0 9
#define AM62LX_DEV_WKUP_TIMER0_TIMER_TCLK_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 10

#define AM62LX_DEV_WKUP_TIMER1_TIMER_HCLK_CLK 0
#define AM62LX_DEV_WKUP_TIMER1_TIMER_TCLK_CLK 2
#define AM62LX_DEV_WKUP_TIMER1_TIMER_TCLK_CLK_PARENT_WKUP_TIMERCLKN_SEL_OUT1 3
#define AM62LX_DEV_WKUP_TIMER1_TIMER_TCLK_CLK_PARENT_DMTIMER_DMC1MS_WKUP_0_TIMER_PWM 4

#define AM62LX_DEV_ECAP0_VBUS_CLK 0

#define AM62LX_DEV_ECAP1_VBUS_CLK 0

#define AM62LX_DEV_ECAP2_VBUS_CLK 0

#define AM62LX_DEV_ELM0_VBUSP_CLK 0

#define AM62LX_DEV_MMCSD1_EMMCSDSS_IO_CLK_I 0
#define AM62LX_DEV_MMCSD1_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC1_CLKLB_OUT 1
#define AM62LX_DEV_MMCSD1_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC1_CLK_OUT 2
#define AM62LX_DEV_MMCSD1_EMMCSDSS_IO_CLK_O 3
#define AM62LX_DEV_MMCSD1_EMMCSDSS_VBUS_CLK 5
#define AM62LX_DEV_MMCSD1_EMMCSDSS_XIN_CLK 6
#define AM62LX_DEV_MMCSD1_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT5_CLK 7
#define AM62LX_DEV_MMCSD1_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT9_CLK 8

#define AM62LX_DEV_MMCSD2_EMMCSDSS_IO_CLK_I 0
#define AM62LX_DEV_MMCSD2_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC2_CLKLB_OUT 1
#define AM62LX_DEV_MMCSD2_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC2_CLK_OUT 2
#define AM62LX_DEV_MMCSD2_EMMCSDSS_IO_CLK_O 3
#define AM62LX_DEV_MMCSD2_EMMCSDSS_VBUS_CLK 5
#define AM62LX_DEV_MMCSD2_EMMCSDSS_XIN_CLK 6
#define AM62LX_DEV_MMCSD2_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT5_CLK 7
#define AM62LX_DEV_MMCSD2_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT9_CLK 8

#define AM62LX_DEV_MMCSD0_EMMCSDSS_IO_CLK_I 0
#define AM62LX_DEV_MMCSD0_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC0_CLKLB_OUT 1
#define AM62LX_DEV_MMCSD0_EMMCSDSS_IO_CLK_I_PARENT_BOARD_0_MMC0_CLK_OUT 2
#define AM62LX_DEV_MMCSD0_EMMCSDSS_IO_CLK_O 3
#define AM62LX_DEV_MMCSD0_EMMCSDSS_VBUS_CLK 5
#define AM62LX_DEV_MMCSD0_EMMCSDSS_XIN_CLK 6
#define AM62LX_DEV_MMCSD0_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT5_CLK 7
#define AM62LX_DEV_MMCSD0_EMMCSDSS_XIN_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT9_CLK 8

#define AM62LX_DEV_EQEP0_VBUS_CLK 0

#define AM62LX_DEV_EQEP1_VBUS_CLK 0

#define AM62LX_DEV_EQEP2_VBUS_CLK 0

#define AM62LX_DEV_FSS0_OSPI0_DQS_CLK 0
#define AM62LX_DEV_FSS0_OSPI0_ICLK_CLK 1
#define AM62LX_DEV_FSS0_OSPI0_ICLK_CLK_PARENT_BOARD_0_OSPI0_DQS_OUT 2
#define AM62LX_DEV_FSS0_OSPI0_ICLK_CLK_PARENT_BOARD_0_OSPI0_LBCLKO_OUT 3
#define AM62LX_DEV_FSS0_OSPI0_OCLK_CLK 4
#define AM62LX_DEV_FSS0_OSPI0_RCLK_CLK 5
#define AM62LX_DEV_FSS0_OSPI0_RCLK_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT7_CLK 6
#define AM62LX_DEV_FSS0_OSPI0_RCLK_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT4_CLK 7
#define AM62LX_DEV_FSS0_VBUS_CLK 8

#define AM62LX_DEV_GICSS0_VCLK_CLK 0

#define AM62LX_DEV_GPIO0_MMR_CLK 0

#define AM62LX_DEV_GPIO2_MMR_CLK 0

#define AM62LX_DEV_WKUP_GPIO0_MMR_CLK 0
#define AM62LX_DEV_WKUP_GPIO0_MMR_CLK_PARENT_SAM62_PLL_CTRL_WRAP_WKUP_0_CHIP_DIV1_CLK_CLK4 1
#define AM62LX_DEV_WKUP_GPIO0_MMR_CLK_PARENT_RTCSS_WKUP_0_OSC_32K_CLK 2
#define AM62LX_DEV_WKUP_GPIO0_MMR_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 3
#define AM62LX_DEV_WKUP_GPIO0_MMR_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 4

#define AM62LX_DEV_GPMC0_FUNC_CLK 0
#define AM62LX_DEV_GPMC0_FUNC_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT3_CLK 1
#define AM62LX_DEV_GPMC0_FUNC_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT3_CLK 2
#define AM62LX_DEV_GPMC0_PI_GPMC_RET_CLK 3
#define AM62LX_DEV_GPMC0_PO_GPMC_DEV_CLK 4
#define AM62LX_DEV_GPMC0_VBUSM_CLK 5

#define AM62LX_DEV_WKUP_GTC0_GTC_CLK 0
#define AM62LX_DEV_WKUP_GTC0_GTC_CLK_PARENT_WKUP_GTCCLK_SEL_OUT0 1
#define AM62LX_DEV_WKUP_GTC0_GTC_CLK_PARENT_CLK_32K_RC_SEL_OUT0 2
#define AM62LX_DEV_WKUP_GTC0_VBUSP_CLK 3

#define AM62LX_DEV_DSS_DSI0_DPHY_0_RX_ESC_CLK 0
#define AM62LX_DEV_DSS_DSI0_DPHY_0_TX_ESC_CLK 1
#define AM62LX_DEV_DSS_DSI0_DPI_0_CLK 2
#define AM62LX_DEV_DSS_DSI0_PLL_CTRL_CLK 3
#define AM62LX_DEV_DSS_DSI0_PPI_0_TXBYTECLKHS_CL_CLK 4
#define AM62LX_DEV_DSS_DSI0_SYS_CLK 5

#define AM62LX_DEV_DSS0_DPI_0_IN_CLK 0
#define AM62LX_DEV_DSS0_DPI_0_IN_CLK_PARENT_HSDIV0_16FFT_MAIN_17_HSDIVOUT0_CLK 1
#define AM62LX_DEV_DSS0_DPI_0_IN_CLK_PARENT_BOARD_0_VOUT0_EXTPCLKIN_OUT 2
#define AM62LX_DEV_DSS0_DPI_0_OUT_CLK 3
#define AM62LX_DEV_DSS0_DSS_FUNC_CLK 4

#define AM62LX_DEV_EPWM0_VBUSP_CLK 0

#define AM62LX_DEV_EPWM1_VBUSP_CLK 0

#define AM62LX_DEV_EPWM2_VBUSP_CLK 0

#define AM62LX_DEV_LED0_VBUS_CLK 1

#define AM62LX_DEV_PBIST0_CLK8_CLK 7
#define AM62LX_DEV_PBIST0_TCLK_CLK 9

#define AM62LX_DEV_WKUP_PBIST0_CLK8_CLK 7

#define AM62LX_DEV_WKUP_VTM0_FIX_REF2_CLK 0
#define AM62LX_DEV_WKUP_VTM0_FIX_REF_CLK 1
#define AM62LX_DEV_WKUP_VTM0_VBUSP_CLK 2

#define AM62LX_DEV_MCAN0_MCANSS_CCLK_CLK 1
#define AM62LX_DEV_MCAN0_MCANSS_CCLK_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT4_CLK 2
#define AM62LX_DEV_MCAN0_MCANSS_CCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 3
#define AM62LX_DEV_MCAN0_MCANSS_CCLK_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 4
#define AM62LX_DEV_MCAN0_MCANSS_CCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 5
#define AM62LX_DEV_MCAN0_MCANSS_HCLK_CLK 6

#define AM62LX_DEV_MCAN1_MCANSS_CCLK_CLK 1
#define AM62LX_DEV_MCAN1_MCANSS_CCLK_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT4_CLK 2
#define AM62LX_DEV_MCAN1_MCANSS_CCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 3
#define AM62LX_DEV_MCAN1_MCANSS_CCLK_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 4
#define AM62LX_DEV_MCAN1_MCANSS_CCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 5
#define AM62LX_DEV_MCAN1_MCANSS_HCLK_CLK 6

#define AM62LX_DEV_MCAN2_MCANSS_CCLK_CLK 1
#define AM62LX_DEV_MCAN2_MCANSS_CCLK_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT4_CLK 2
#define AM62LX_DEV_MCAN2_MCANSS_CCLK_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 3
#define AM62LX_DEV_MCAN2_MCANSS_CCLK_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 4
#define AM62LX_DEV_MCAN2_MCANSS_CCLK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 5
#define AM62LX_DEV_MCAN2_MCANSS_HCLK_CLK 6

#define AM62LX_DEV_MCASP0_AUX_CLK 0
#define AM62LX_DEV_MCASP0_AUX_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT8_CLK 1
#define AM62LX_DEV_MCASP0_AUX_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT1_CLK 2
#define AM62LX_DEV_MCASP0_MCASP_ACLKR_PIN 3
#define AM62LX_DEV_MCASP0_MCASP_ACLKR_POUT 4
#define AM62LX_DEV_MCASP0_MCASP_ACLKX_PIN 5
#define AM62LX_DEV_MCASP0_MCASP_ACLKX_POUT 6
#define AM62LX_DEV_MCASP0_MCASP_AFSR_PIN 7
#define AM62LX_DEV_MCASP0_MCASP_AFSR_POUT 8
#define AM62LX_DEV_MCASP0_MCASP_AFSX_PIN 9
#define AM62LX_DEV_MCASP0_MCASP_AFSX_POUT 10
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_PIN 11
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_PIN_PARENT_BOARD_0_EXT_REFCLK1_OUT 12
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_PIN_PARENT_GLUELOGIC_HFOSC0_CLK 13
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_PIN_PARENT_BOARD_0_AUDIO_EXT_REFCLK0_OUT 14
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_PIN_PARENT_BOARD_0_AUDIO_EXT_REFCLK1_OUT 15
#define AM62LX_DEV_MCASP0_MCASP_AHCLKR_POUT 16
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_PIN 17
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_PIN_PARENT_BOARD_0_EXT_REFCLK1_OUT 18
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_PIN_PARENT_GLUELOGIC_HFOSC0_CLK 19
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_PIN_PARENT_BOARD_0_AUDIO_EXT_REFCLK0_OUT 20
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_PIN_PARENT_BOARD_0_AUDIO_EXT_REFCLK1_OUT 21
#define AM62LX_DEV_MCASP0_MCASP_AHCLKX_POUT 22
#define AM62LX_DEV_MCASP0_VBUSP_CLK 23

#define AM62LX_DEV_MCASP1_AUX_CLK 0
#define AM62LX_DEV_MCASP1_MCASP_ACLKR_PIN 1
#define AM62LX_DEV_MCASP1_MCASP_ACLKR_POUT 2
#define AM62LX_DEV_MCASP1_MCASP_ACLKX_PIN 3
#define AM62LX_DEV_MCASP1_MCASP_ACLKX_POUT 4
#define AM62LX_DEV_MCASP1_MCASP_AFSR_PIN 5
#define AM62LX_DEV_MCASP1_MCASP_AFSR_POUT 6
#define AM62LX_DEV_MCASP1_MCASP_AFSX_PIN 7
#define AM62LX_DEV_MCASP1_MCASP_AFSX_POUT 8
#define AM62LX_DEV_MCASP1_MCASP_AHCLKR_PIN 9
#define AM62LX_DEV_MCASP1_MCASP_AHCLKR_POUT 10
#define AM62LX_DEV_MCASP1_MCASP_AHCLKX_PIN 11
#define AM62LX_DEV_MCASP1_MCASP_AHCLKX_POUT 12
#define AM62LX_DEV_MCASP1_VBUSP_CLK 13

#define AM62LX_DEV_MCASP2_AUX_CLK 0
#define AM62LX_DEV_MCASP2_MCASP_ACLKR_PIN 1
#define AM62LX_DEV_MCASP2_MCASP_ACLKR_POUT 2
#define AM62LX_DEV_MCASP2_MCASP_ACLKX_PIN 3
#define AM62LX_DEV_MCASP2_MCASP_ACLKX_POUT 4
#define AM62LX_DEV_MCASP2_MCASP_AFSR_PIN 5
#define AM62LX_DEV_MCASP2_MCASP_AFSR_POUT 6
#define AM62LX_DEV_MCASP2_MCASP_AFSX_PIN 7
#define AM62LX_DEV_MCASP2_MCASP_AFSX_POUT 8
#define AM62LX_DEV_MCASP2_MCASP_AHCLKR_PIN 9
#define AM62LX_DEV_MCASP2_MCASP_AHCLKR_POUT 10
#define AM62LX_DEV_MCASP2_MCASP_AHCLKX_PIN 11
#define AM62LX_DEV_MCASP2_MCASP_AHCLKX_POUT 12
#define AM62LX_DEV_MCASP2_VBUSP_CLK 13

#define AM62LX_DEV_I2C0_CLK 0
#define AM62LX_DEV_I2C0_PISCL 1
#define AM62LX_DEV_I2C0_PISYS_CLK 2
#define AM62LX_DEV_I2C0_PORSCL 3

#define AM62LX_DEV_I2C1_CLK 0
#define AM62LX_DEV_I2C1_PISCL 1
#define AM62LX_DEV_I2C1_PISYS_CLK 2
#define AM62LX_DEV_I2C1_PORSCL 3

#define AM62LX_DEV_I2C2_CLK 0
#define AM62LX_DEV_I2C2_PISCL 1
#define AM62LX_DEV_I2C2_PISYS_CLK 2
#define AM62LX_DEV_I2C2_PORSCL 3

#define AM62LX_DEV_I2C3_CLK 0
#define AM62LX_DEV_I2C3_PISCL 1
#define AM62LX_DEV_I2C3_PISYS_CLK 2
#define AM62LX_DEV_I2C3_PORSCL 3

#define AM62LX_DEV_WKUP_I2C0_CLK 0
#define AM62LX_DEV_WKUP_I2C0_PISCL 1
#define AM62LX_DEV_WKUP_I2C0_PISYS_CLK 2
#define AM62LX_DEV_WKUP_I2C0_PORSCL 3

#define AM62LX_DEV_WKUP_RTCSS0_ANA_OSC32K_CLK 0
#define AM62LX_DEV_WKUP_RTCSS0_AUX_32K_CLK 1
#define AM62LX_DEV_WKUP_RTCSS0_JTAG_WRCK 3
#define AM62LX_DEV_WKUP_RTCSS0_OSC_32K_CLK 4
#define AM62LX_DEV_WKUP_RTCSS0_VCLK_CLK 5

#define AM62LX_DEV_RTI0_RTI_CLK 0
#define AM62LX_DEV_RTI0_RTI_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 1
#define AM62LX_DEV_RTI0_RTI_CLK_PARENT_CLK_32K_RC_SEL_OUT0 2
#define AM62LX_DEV_RTI0_RTI_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 3
#define AM62LX_DEV_RTI0_RTI_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 4
#define AM62LX_DEV_RTI0_VBUSP_CLK 5

#define AM62LX_DEV_RTI1_RTI_CLK 0
#define AM62LX_DEV_RTI1_RTI_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 1
#define AM62LX_DEV_RTI1_RTI_CLK_PARENT_CLK_32K_RC_SEL_OUT0 2
#define AM62LX_DEV_RTI1_RTI_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 3
#define AM62LX_DEV_RTI1_RTI_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 4
#define AM62LX_DEV_RTI1_VBUSP_CLK 5

#define AM62LX_DEV_DEBUGSS0_CFG_CLK 0
#define AM62LX_DEV_DEBUGSS0_DBG_CLK 1
#define AM62LX_DEV_DEBUGSS0_SYS_CLK 2

#define AM62LX_DEV_MSRAM_96K0_VCLK_CLK 0

#define AM62LX_DEV_WKUP_PSRAM_64K0_CLK_CLK 0

#define AM62LX_DEV_ROM0_CLK_CLK 0

#define AM62LX_DEV_PSC0_CLK 0
#define AM62LX_DEV_PSC0_SLOW_CLK 1

#define AM62LX_DEV_WKUP_DEEPSLEEP_SOURCES0_CLK_12M_RC_CLK 0

#define AM62LX_DEV_COMPUTE_CLUSTER0_A53_0_A53_CORE0_ARM_CLK_CLK 0

#define AM62LX_DEV_COMPUTE_CLUSTER0_A53_1_A53_CORE1_ARM_CLK_CLK 0

#define AM62LX_DEV_COMPUTE_CLUSTER0_ARM_COREPACK_0_COREPAC_ARM_CLK_CLK 0
#define AM62LX_DEV_COMPUTE_CLUSTER0_ARM_COREPACK_0_A53_DIVH_CLK4_OBSCLK_OUT_CLK 2
#define AM62LX_DEV_COMPUTE_CLUSTER0_ARM_COREPACK_0_PLL_CTRL_CLK 4

#define AM62LX_DEV_COMPUTE_CLUSTER0_CLKDIV_0_DIVP_CLK1_CLK_CLK 0
#define AM62LX_DEV_COMPUTE_CLUSTER0_CLKDIV_0_DIVH_CLK4_CLK_CLK 1
#define AM62LX_DEV_COMPUTE_CLUSTER0_CLKDIV_0_FUNC_CLKIN_CLK 2

#define AM62LX_DEV_COMPUTE_CLUSTER0_PBIST_0_DIVH_CLK4_CLK_CLK 1
#define AM62LX_DEV_COMPUTE_CLUSTER0_PBIST_0_DIVP_CLK1_CLK_CLK 2

#define AM62LX_DEV_DDR16SS0_DDRSS_DDR_PLL_CLK 0
#define AM62LX_DEV_DDR16SS0_DDRSS_TCK 1
#define AM62LX_DEV_DDR16SS0_PLL_CTRL_CLK 2

#define AM62LX_DEV_WKUP_DFTSS0_PLL_CLK 1
#define AM62LX_DEV_WKUP_DFTSS0_VBUSP_CLK_CLK 2

#define AM62LX_DEV_MCSPI0_CLKSPIREF_CLK 0
#define AM62LX_DEV_MCSPI0_IO_CLKSPIO_CLK 4
#define AM62LX_DEV_MCSPI0_VBUSP_CLK 5

#define AM62LX_DEV_MCSPI1_CLKSPIREF_CLK 0
#define AM62LX_DEV_MCSPI1_IO_CLKSPIO_CLK 4
#define AM62LX_DEV_MCSPI1_VBUSP_CLK 5

#define AM62LX_DEV_MCSPI2_CLKSPIREF_CLK 0
#define AM62LX_DEV_MCSPI2_IO_CLKSPIO_CLK 4
#define AM62LX_DEV_MCSPI2_VBUSP_CLK 5

#define AM62LX_DEV_MCSPI3_CLKSPIREF_CLK 0
#define AM62LX_DEV_MCSPI3_IO_CLKSPIO_CLK 4
#define AM62LX_DEV_MCSPI3_VBUSP_CLK 5

#define AM62LX_DEV_TRNG_DRBG_EIP76D_WRAP0_VCLK_CLK 0

#define AM62LX_DEV_UART0_FCLK_CLK 0
#define AM62LX_DEV_UART0_VBUSP_CLK 3

#define AM62LX_DEV_UART1_FCLK_CLK 0
#define AM62LX_DEV_UART1_VBUSP_CLK 3

#define AM62LX_DEV_UART2_FCLK_CLK 0
#define AM62LX_DEV_UART2_VBUSP_CLK 3

#define AM62LX_DEV_UART3_FCLK_CLK 0
#define AM62LX_DEV_UART3_VBUSP_CLK 3

#define AM62LX_DEV_UART4_FCLK_CLK 0
#define AM62LX_DEV_UART4_VBUSP_CLK 3

#define AM62LX_DEV_UART5_FCLK_CLK 0
#define AM62LX_DEV_UART5_VBUSP_CLK 3

#define AM62LX_DEV_UART6_FCLK_CLK 0
#define AM62LX_DEV_UART6_VBUSP_CLK 3

#define AM62LX_DEV_WKUP_UART0_FCLK_CLK 0
#define AM62LX_DEV_WKUP_UART0_VBUSP_CLK 3

#define AM62LX_DEV_USB0_BUS_CLK 0
#define AM62LX_DEV_USB0_CFG_CLK 1
#define AM62LX_DEV_USB0_USB2_APB_PCLK_CLK 2
#define AM62LX_DEV_USB0_USB2_REFCLOCK_CLK 3
#define AM62LX_DEV_USB0_USB2_REFCLOCK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 4
#define AM62LX_DEV_USB0_USB2_REFCLOCK_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT8_CLK4 5
#define AM62LX_DEV_USB0_USB2_TAP_TCK 10

#define AM62LX_DEV_USB1_BUS_CLK 0
#define AM62LX_DEV_USB1_CFG_CLK 1
#define AM62LX_DEV_USB1_USB2_APB_PCLK_CLK 2
#define AM62LX_DEV_USB1_USB2_REFCLOCK_CLK 3
#define AM62LX_DEV_USB1_USB2_REFCLOCK_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 4
#define AM62LX_DEV_USB1_USB2_REFCLOCK_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT8_CLK4 5
#define AM62LX_DEV_USB1_USB2_TAP_TCK 10

#define AM62LX_DEV_DPHY_TX0_CLK 0
#define AM62LX_DEV_DPHY_TX0_DPHY_REF_CLK 1
#define AM62LX_DEV_DPHY_TX0_DPHY_REF_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 2
#define AM62LX_DEV_DPHY_TX0_DPHY_REF_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT8_CLK 3
#define AM62LX_DEV_DPHY_TX0_IP1_PPI_M_RXCLKESC_CLK 4
#define AM62LX_DEV_DPHY_TX0_IP1_PPI_M_TXCLKESC_CLK 5
#define AM62LX_DEV_DPHY_TX0_IP1_PPI_TXBYTECLKHS_CL_CLK 6
#define AM62LX_DEV_DPHY_TX0_IP2_PPI_M_TXCLKESC_CLK 8
#define AM62LX_DEV_DPHY_TX0_IP3_PPI_M_TXCLKESC_CLK 11
#define AM62LX_DEV_DPHY_TX0_IP4_PPI_M_TXCLKESC_CLK 14
#define AM62LX_DEV_DPHY_TX0_PSM_CLK 16

#define AM62LX_DEV_BOARD0_AUDIO_EXT_REFCLK0_IN 0
#define AM62LX_DEV_BOARD0_AUDIO_EXT_REFCLK0_OUT 1
#define AM62LX_DEV_BOARD0_AUDIO_EXT_REFCLK1_IN 2
#define AM62LX_DEV_BOARD0_AUDIO_EXT_REFCLK1_OUT 3
#define AM62LX_DEV_BOARD0_CLKOUT0_IN 4
#define AM62LX_DEV_BOARD0_CLKOUT0_IN_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK5 5
#define AM62LX_DEV_BOARD0_CLKOUT0_IN_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK10 6
#define AM62LX_DEV_BOARD0_CP_GEMAC_CPTS0_RFT_CLK_OUT 7
#define AM62LX_DEV_BOARD0_DDR0_CK0_IN 8
#define AM62LX_DEV_BOARD0_EXT_REFCLK1_OUT 19
#define AM62LX_DEV_BOARD0_GPMC0_CLKLB_IN 20
#define AM62LX_DEV_BOARD0_GPMC0_CLKLB_OUT 21
#define AM62LX_DEV_BOARD0_GPMC0_CLK_IN 22
#define AM62LX_DEV_BOARD0_GPMC0_FCLK_MUX_IN 23
#define AM62LX_DEV_BOARD0_I2C0_SCL_IN 24
#define AM62LX_DEV_BOARD0_I2C0_SCL_OUT 25
#define AM62LX_DEV_BOARD0_I2C1_SCL_IN 26
#define AM62LX_DEV_BOARD0_I2C1_SCL_OUT 27
#define AM62LX_DEV_BOARD0_I2C2_SCL_IN 28
#define AM62LX_DEV_BOARD0_I2C2_SCL_OUT 29
#define AM62LX_DEV_BOARD0_I2C3_SCL_IN 30
#define AM62LX_DEV_BOARD0_I2C3_SCL_OUT 31
#define AM62LX_DEV_BOARD0_MCASP0_ACLKR_IN 34
#define AM62LX_DEV_BOARD0_MCASP0_ACLKR_OUT 35
#define AM62LX_DEV_BOARD0_MCASP0_ACLKX_IN 36
#define AM62LX_DEV_BOARD0_MCASP0_ACLKX_OUT 37
#define AM62LX_DEV_BOARD0_MCASP0_AFSR_IN 38
#define AM62LX_DEV_BOARD0_MCASP0_AFSR_OUT 39
#define AM62LX_DEV_BOARD0_MCASP0_AFSX_IN 40
#define AM62LX_DEV_BOARD0_MCASP0_AFSX_OUT 41
#define AM62LX_DEV_BOARD0_MCASP1_ACLKR_IN 42
#define AM62LX_DEV_BOARD0_MCASP1_ACLKR_OUT 43
#define AM62LX_DEV_BOARD0_MCASP1_ACLKX_IN 44
#define AM62LX_DEV_BOARD0_MCASP1_ACLKX_OUT 45
#define AM62LX_DEV_BOARD0_MCASP1_AFSR_IN 46
#define AM62LX_DEV_BOARD0_MCASP1_AFSR_OUT 47
#define AM62LX_DEV_BOARD0_MCASP1_AFSX_IN 48
#define AM62LX_DEV_BOARD0_MCASP1_AFSX_OUT 49
#define AM62LX_DEV_BOARD0_MCASP2_ACLKR_IN 50
#define AM62LX_DEV_BOARD0_MCASP2_ACLKR_OUT 51
#define AM62LX_DEV_BOARD0_MCASP2_ACLKX_IN 52
#define AM62LX_DEV_BOARD0_MCASP2_ACLKX_OUT 53
#define AM62LX_DEV_BOARD0_MCASP2_AFSR_IN 54
#define AM62LX_DEV_BOARD0_MCASP2_AFSR_OUT 55
#define AM62LX_DEV_BOARD0_MCASP2_AFSX_IN 56
#define AM62LX_DEV_BOARD0_MCASP2_AFSX_OUT 57
#define AM62LX_DEV_BOARD0_MDIO0_MDC_IN 58
#define AM62LX_DEV_BOARD0_MMC0_CLKLB_IN 59
#define AM62LX_DEV_BOARD0_MMC0_CLKLB_OUT 60
#define AM62LX_DEV_BOARD0_MMC0_CLK_IN 61
#define AM62LX_DEV_BOARD0_MMC0_CLK_OUT 62
#define AM62LX_DEV_BOARD0_MMC1_CLKLB_IN 63
#define AM62LX_DEV_BOARD0_MMC1_CLKLB_OUT 64
#define AM62LX_DEV_BOARD0_MMC1_CLK_IN 65
#define AM62LX_DEV_BOARD0_MMC1_CLK_OUT 66
#define AM62LX_DEV_BOARD0_MMC2_CLKLB_IN 67
#define AM62LX_DEV_BOARD0_MMC2_CLKLB_OUT 68
#define AM62LX_DEV_BOARD0_MMC2_CLK_IN 69
#define AM62LX_DEV_BOARD0_MMC2_CLK_OUT 70
#define AM62LX_DEV_BOARD0_OBSCLK0_IN 71
#define AM62LX_DEV_BOARD0_OBSCLK1_IN 72
#define AM62LX_DEV_BOARD0_OSPI0_CLK_IN 73
#define AM62LX_DEV_BOARD0_OSPI0_DQS_OUT 74
#define AM62LX_DEV_BOARD0_OSPI0_LBCLKO_IN 75
#define AM62LX_DEV_BOARD0_OSPI0_LBCLKO_OUT 76
#define AM62LX_DEV_BOARD0_RMII1_REF_CLK_OUT 83
#define AM62LX_DEV_BOARD0_RMII2_REF_CLK_OUT 84
#define AM62LX_DEV_BOARD0_SPI0_CLK_IN 85
#define AM62LX_DEV_BOARD0_SPI1_CLK_IN 87
#define AM62LX_DEV_BOARD0_SPI2_CLK_IN 89
#define AM62LX_DEV_BOARD0_SPI3_CLK_IN 91
#define AM62LX_DEV_BOARD0_TCK_OUT 94
#define AM62LX_DEV_BOARD0_TIMER_IO0_IN 95
#define AM62LX_DEV_BOARD0_TIMER_IO1_IN 96
#define AM62LX_DEV_BOARD0_TIMER_IO2_IN 97
#define AM62LX_DEV_BOARD0_TIMER_IO3_IN 98
#define AM62LX_DEV_BOARD0_TRC_CLK_IN 99
#define AM62LX_DEV_BOARD0_VOUT0_EXTPCLKIN_OUT 100
#define AM62LX_DEV_BOARD0_WKUP_CLKOUT0_IN 102
#define AM62LX_DEV_BOARD0_WKUP_CLKOUT0_IN_PARENT_WKUP_CLKOUT_SEL_OUT0 103
#define AM62LX_DEV_BOARD0_WKUP_CLKOUT0_IN_PARENT_GLUELOGIC_HFOSC0_CLK 104
#define AM62LX_DEV_BOARD0_WKUP_EXT_REFCLK0_OUT 105
#define AM62LX_DEV_BOARD0_WKUP_I2C0_SCL_OUT 107
#define AM62LX_DEV_BOARD0_WKUP_OBSCLK0_IN 108
#define AM62LX_DEV_BOARD0_WKUP_OBSCLK0_IN_PARENT_WKUP_OBSCLK_MUX_SEL_OUT0 109
#define AM62LX_DEV_BOARD0_WKUP_OBSCLK0_IN_PARENT_GLUELOGIC_HFOSC0_CLK 110
#define AM62LX_DEV_BOARD0_WKUP_SYSCLKOUT0_IN 113

#define AM62LX_DEV_CLK_32K_RC_SEL_DEV_VD_CLK 0
#define AM62LX_DEV_CLK_32K_RC_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 1
#define AM62LX_DEV_CLK_32K_RC_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_WKUP_32KHZ_GEN_0_HSDIVOUT0_CLK8 2
#define AM62LX_DEV_CLK_32K_RC_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3_DUP0 3
#define AM62LX_DEV_CLK_32K_RC_SEL_DEV_VD_CLK_PARENT_RTCSS_WKUP_0_OSC_32K_CLK 4

#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK 0
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 1
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_POSTDIV4_16FF_MAIN_0_HSDIVOUT6_CLK 2
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_BOARD_0_CP_GEMAC_CPTS0_RFT_CLK_OUT 3
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_BOARD_0_WKUP_EXT_REFCLK0_OUT 4
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_BOARD_0_EXT_REFCLK1_OUT 5
#define AM62LX_DEV_WKUP_GTCCLK_SEL_DEV_VD_CLK_PARENT_SAM62_PLL_CTRL_WRAP_WKUP_0_CHIP_DIV1_CLK_CLK2 6

#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK 0
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 1
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT8_CLK 2
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT0_CLK 3
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT4_CLK 4
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT0_CLK_DUP0 5
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 6
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 7
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_WKUP_32KHZ_GEN_0_HSDIVOUT0_CLK8 8
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_WKUP_0_HSDIVOUT0_CLK 9
#define AM62LX_DEV_WKUP_OBSCLK_MUX_SEL_DEV_VD_CLK_PARENT_CLK_32K_RC_SEL_OUT0 10

#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK 0
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_RTCSS_WKUP_0_OSC_32K_CLK 1
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT7_CLK 2
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_WKUP_0_HSDIVOUT0_CLK2 3
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_POSTDIV4_16FF_WKUP_0_HSDIVOUT8_CLK 4
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_CLK_32K_RC_SEL_OUT0 5
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 6
#define AM62LX_DEV_WKUP_CLKOUT_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 7

#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK 0
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT0_CLK 1
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF1 2
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_MAIN_17_HSDIVOUT0_CLK 3
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLK_1P0V_97P65K3 4
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_SAM62L_A53_256KB_WRAP_MAIN_0_ARM_COREPACK_0_A53_DIVH_CLK4_OBSCLK_OUT_CLK 5
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_MAIN_0_HSDIVOUT2_CLK 6
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_RCOSC_CLKOUT 7
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV0_16FFT_WKUP_32KHZ_GEN_0_HSDIVOUT0_CLK8 8
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_HSDIV4_16FFT_WKUP_0_HSDIVOUT0_CLK 9
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_GLUELOGIC_HFOSC0_CLK 10
#define AM62LX_DEV_OBSCLK0_MUX_SEL_DEV_VD_CLK_PARENT_CPSW_3GUSS_AM62L_MAIN_0_CPTS_GENF0 11


#endif /* SOC_AM62LX_CLOCKS_H */
