F405_TARGETS   += $(TARGET)
FEATURES       = VCP SDCARD_SPI
TARGET_SRC = \
	drivers/accgyro/accgyro_mpu.c \
	drivers/accgyro/accgyro_mpu6500.c \
	drivers/accgyro/accgyro_mpu6000.c \
	drivers/accgyro/accgyro_mpu6500.c \
	drivers/max7456.c
	drivers/light_ws2811strip.c
