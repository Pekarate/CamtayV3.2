#include "App_User.h"
#include "main.h"
#include "cmsis_os.h"
#include "usb_device.h"

 void MainfunctionTask(void const * argument)
 {
	 for (;;) {
		 //HAL_GPIO_TogglePin(LD_GPIO_Port, LD_Pin);
		 osDelay(1000);
	}
 }
 void io_handle_cb(void const * argument);
 void STC3115_handle_cb(void const * argument);
