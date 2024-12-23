#
# Copyright (c) 2025-2026, Texas Instruments Incorporated - https://www.ti.com/
#
# SPDX-License-Identifier: BSD-3-Clause
#

PLAT_PATH	:=	plat/ti/k3low
TARGET_BOARD	?=	am62lx-evm

include plat/ti/common/plat_common.mk
include ${PLAT_PATH}/board/${TARGET_BOARD}/board.mk
include drivers/ti/clk/ti_clk.mk
include drivers/ti/pd/ti_pd.mk
include ${PLAT_PATH}/common/pm/ti_soc_pm.mk
include plat/ti/common/scmi/ti_scmi.mk


BL32_BASE ?= 0x80200000
$(eval $(call add_define,BL32_BASE))

PRELOADED_BL33_BASE ?= 0x82000000
$(eval $(call add_define,PRELOADED_BL33_BASE))

K3_HW_CONFIG_BASE ?= 0x88000000
$(eval $(call add_define,K3_HW_CONFIG_BASE))

K3_SPL_IMG_OFFSET := 0x80000
$(eval $(call add_define,K3_SPL_IMG_OFFSET))

AM62L_DDR_RAM_SIZE ?= 0x80000000
$(eval $(call add_define,AM62L_DDR_RAM_SIZE))

USE_COHERENT_MEM := 0

# modify BUILD_PLAT to point to board specific build directory
BUILD_PLAT := $(abspath ${BUILD_BASE})/${PLAT}/${TARGET_BOARD}/${BUILD_TYPE}

ifeq (${IMAGE_BL1}, 1)
override ENABLE_PIE := 0
endif

# We need to enable this for robust clocking
CONFIG_CLK_PLL_16FFT_FRACF_CALIBRATION := 1
$(eval $(call add_define,CONFIG_CLK_PLL_16FFT_FRACF_CALIBRATION))

PLAT_INCLUDES +=	\
			-I${PLAT_PATH}/board/${TARGET_BOARD}/include	\
			-I${PLAT_PATH}					\
			-Idrivers/scmi-msg				\
			-Iplat/ti/common/include			\
			-Iplat/ti/common/scmi				\

PLAT_INCLUDES		+= \
				-I${PLAT_PATH}/board/${TARGET_BOARD}/include \
				-I${PLAT_PATH} \
				-Iplat/ti/common/include \
				-I${PLAT_PATH}/common/drivers/firewall \
				-I${PLAT_PATH}/common/drivers/k3-ddrss \
				-I${PLAT_PATH}/common/drivers/k3-ddrss/common \
				-I${PLAT_PATH}/common/drivers/k3-ddrss/16bit \

K3_LPDDR4_SOURCES	+= \
				${PLAT_PATH}/common/drivers/k3-ddrss/am62l_ddrss.c \
				${PLAT_PATH}/common/drivers/k3-ddrss/lpddr4_obj_if.c \
				${PLAT_PATH}/common/drivers/k3-ddrss/lpddr4.c \
				${PLAT_PATH}/common/drivers/k3-ddrss/lpddr4_16bit.c \
				${PLAT_PATH}/common/drivers/k3-ddrss/am62lx_ddr_config.c \

K3_PSCI_SOURCES		+= \
				${PLAT_PATH}/common/am62l_psci.c \

K3_TI_SCI_TRANSPORT	:= \
				drivers/ti/ipc/mailbox.c \

BL31_SOURCES		+= \
				drivers/delay_timer/delay_timer.c \
				drivers/delay_timer/generic_delay_timer.c \
				drivers/scmi-msg/base.c		\
				drivers/scmi-msg/entry.c	\
				drivers/scmi-msg/smt.c		\
				${K3_PSCI_SOURCES}		\
				${K3_TI_SCI_TRANSPORT}		\
				${PLAT_PATH}/common/am62l_bl31_setup.c \
				${PLAT_PATH}/common/am62l_topology.c \
				${PLAT_PATH}/common/drivers/firewall/firewall_config.c \
				plat/ti/common/k3_svc.c		\

BL1_SOURCES		+= \
				${PLAT_PATH}/common/am62l_bl1_setup.c \
				${PLAT_PATH}/common/am62l_psc_minimal.c \
				plat/ti/common/k3_helpers.S \
				drivers/io/io_storage.c \
				${K3_LPDDR4_SOURCES} \
				${K3_TI_SCI_TRANSPORT} \
