/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWR_OFF_Pin GPIO_PIN_2
#define PWR_OFF_GPIO_Port GPIOE
#define PWR_CTRL_Pin GPIO_PIN_3
#define PWR_CTRL_GPIO_Port GPIOE
#define LCD_RS_Pin GPIO_PIN_4
#define LCD_RS_GPIO_Port GPIOE
#define LCD_RST_Pin GPIO_PIN_5
#define LCD_RST_GPIO_Port GPIOE
#define LCD_CS_Pin GPIO_PIN_6
#define LCD_CS_GPIO_Port GPIOE
#define ADC420_Pin GPIO_PIN_0
#define ADC420_GPIO_Port GPIOA
#define RS485_DE_Pin GPIO_PIN_1
#define RS485_DE_GPIO_Port GPIOA
#define RS485_TX_Pin GPIO_PIN_2
#define RS485_TX_GPIO_Port GPIOA
#define RS_485_RX_Pin GPIO_PIN_3
#define RS_485_RX_GPIO_Port GPIOA
#define LCD_CLK_Pin GPIO_PIN_5
#define LCD_CLK_GPIO_Port GPIOA
#define LCD_DATA_Pin GPIO_PIN_7
#define LCD_DATA_GPIO_Port GPIOA
#define BLE_RX_Pin GPIO_PIN_10
#define BLE_RX_GPIO_Port GPIOB
#define BLE_TX_Pin GPIO_PIN_11
#define BLE_TX_GPIO_Port GPIOB
#define LD_Pin GPIO_PIN_12
#define LD_GPIO_Port GPIOB
#define PCIE_RX_Pin GPIO_PIN_9
#define PCIE_RX_GPIO_Port GPIOA
#define PCIE_TX_Pin GPIO_PIN_10
#define PCIE_TX_GPIO_Port GPIOA
#define V_BOOT_EN_Pin GPIO_PIN_15
#define V_BOOT_EN_GPIO_Port GPIOA
#define PCIE_RST_Pin GPIO_PIN_3
#define PCIE_RST_GPIO_Port GPIOB
#define PCIE_WLAN_DIS_Pin GPIO_PIN_4
#define PCIE_WLAN_DIS_GPIO_Port GPIOB
#define STC3115_RESET_Pin GPIO_PIN_5
#define STC3115_RESET_GPIO_Port GPIOB
#define STC3115_SCL_Pin GPIO_PIN_6
#define STC3115_SCL_GPIO_Port GPIOB
#define STC3115_SDA_Pin GPIO_PIN_7
#define STC3115_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
