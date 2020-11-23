################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/tests/lv_test_fonts/font_1.c \
../lvgl/tests/lv_test_fonts/font_2.c \
../lvgl/tests/lv_test_fonts/font_3.c 

OBJS += \
./lvgl/tests/lv_test_fonts/font_1.o \
./lvgl/tests/lv_test_fonts/font_2.o \
./lvgl/tests/lv_test_fonts/font_3.o 

C_DEPS += \
./lvgl/tests/lv_test_fonts/font_1.d \
./lvgl/tests/lv_test_fonts/font_2.d \
./lvgl/tests/lv_test_fonts/font_3.d 


# Each subdirectory must supply rules for building sources it contributes
lvgl/tests/lv_test_fonts/font_1.o: ../lvgl/tests/lv_test_fonts/font_1.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx '-DUSE_ST7565=1' -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/tests/lv_test_fonts/font_1.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lvgl/tests/lv_test_fonts/font_2.o: ../lvgl/tests/lv_test_fonts/font_2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx '-DUSE_ST7565=1' -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/tests/lv_test_fonts/font_2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lvgl/tests/lv_test_fonts/font_3.o: ../lvgl/tests/lv_test_fonts/font_3.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER '-DLV_CONF_INCLUDE_SIMPLE=1' -DDEBUG -DSTM32F407xx '-DUSE_ST7565=1' -c -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/ARM/Bocamtay_V3/ver3.1/App" -I"D:/ARM/Bocamtay_V3/ver3.1/STC3115" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/lvgl/porting" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl" -I"D:/ARM/Bocamtay_V3/ver3.1/ST7565/inc" -I"D:/ARM/Bocamtay_V3/ver3.1/lvgl/porting" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lvgl/tests/lv_test_fonts/font_3.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

