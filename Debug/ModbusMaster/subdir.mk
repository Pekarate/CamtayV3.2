################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ModbusMaster/ModbusMaster.c 

OBJS += \
./ModbusMaster/ModbusMaster.o 

C_DEPS += \
./ModbusMaster/ModbusMaster.d 


# Each subdirectory must supply rules for building sources it contributes
ModbusMaster/ModbusMaster.o: ../ModbusMaster/ModbusMaster.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DUSE_ST7565=1' '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I../App -I../AT_Command -I"../lvgl/porting" -I../lvgl -I"../ST7565/inc" -I../STC3115 -I"../cJSON/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/ModbusMaster" -I../lwgps/src/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"ModbusMaster/ModbusMaster.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

