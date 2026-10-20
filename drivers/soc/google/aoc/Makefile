# SPDX-License-Identifier: GPL-2.0
# gs101 (Pixel 6): the vendor code's own SoC guards (CONFIG_SOC_GS101)
ccflags-$(CONFIG_GOOGLE_AOC_GS101) += -DCONFIG_SOC_GS101=1
# Google's AoC core driver (google-modules/aoc, aoc_ipc), gs201 port
ccflags-y += -I$(src)

obj-$(CONFIG_GS201_AOC_MBOX)	+= mailbox-wc.o
obj-$(CONFIG_GS201_AOC)		+= aoc_core.o
aoc_core-y := aoc.o aoc_ipc_core.o aoc_firmware.o aoc_service_core.o aoc_v1.o
obj-$(CONFIG_GS201_AOC_CHAR)	+= aoc_char_dev.o aoc_channel_dev.o
obj-y				+= alsa/
