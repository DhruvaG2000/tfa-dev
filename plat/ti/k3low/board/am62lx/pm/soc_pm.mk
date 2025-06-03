PLAT_INCLUDES		+=	\
				-I${PLAT_PATH}/board/am62lx/pm/include/			\

BL31_SOURCES		+=	\
				${PLAT_PATH}/board/am62lx/pm/clk_soc_hfosc0.c    \
				${PLAT_PATH}/board/am62lx/pm/clk_soc_lfosc0.c    \
				${PLAT_PATH}/board/am62lx/pm/clocks.c    \
				${PLAT_PATH}/board/am62lx/pm/devices.c    \
				${PLAT_PATH}/board/am62lx/pm/host_idx_mapping.c    \


