################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/lv_gpu/lv_gpu_nxp_pxp.c \
../lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.c \
../lvgl/src/lv_gpu/lv_gpu_nxp_vglite.c \
../lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.c 

OBJS += \
./lvgl/src/lv_gpu/lv_gpu_nxp_pxp.o \
./lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.o \
./lvgl/src/lv_gpu/lv_gpu_nxp_vglite.o \
./lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.o 

C_DEPS += \
./lvgl/src/lv_gpu/lv_gpu_nxp_pxp.d \
./lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.d \
./lvgl/src/lv_gpu/lv_gpu_nxp_vglite.d \
./lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.d 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/lv_gpu/lv_gpu_nxp_pxp.o: ../lvgl/src/lv_gpu/lv_gpu_nxp_pxp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/src/lv_gpu/lv_gpu_nxp_pxp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.o: ../lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lvgl/src/lv_gpu/lv_gpu_nxp_vglite.o: ../lvgl/src/lv_gpu/lv_gpu_nxp_vglite.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/src/lv_gpu/lv_gpu_nxp_vglite.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.o: ../lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
