################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c \
../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c \
../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c 

OBJS += \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.o \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.o \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.o 

C_DEPS += \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.d \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.d \
./Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.o: ../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.o: ../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.o: ../Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I"D:/ARM/Bocamtay_V3/ver3.1/cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/AT_Command" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
