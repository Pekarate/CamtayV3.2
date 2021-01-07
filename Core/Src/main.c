/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include "fatfs.h"
#include "usb_device.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "App_User.h"
#include "ST7565.h"
#include "stc3115_Driver.h"
#include "lvgl.h"
#include "lv_port_disp_template.h"
#include "App_Gpio.h"
//#include "lvgl.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;

I2C_HandleTypeDef hi2c1;

RTC_HandleTypeDef hrtc;

SD_HandleTypeDef hsd;
DMA_HandleTypeDef hdma_sdio_rx;
DMA_HandleTypeDef hdma_sdio_tx;

SPI_HandleTypeDef hspi1;
DMA_HandleTypeDef hdma_spi1_tx;

TIM_HandleTypeDef htim1;

UART_HandleTypeDef huart1;
UART_HandleTypeDef huart2;
UART_HandleTypeDef huart3;
DMA_HandleTypeDef hdma_usart1_rx;
DMA_HandleTypeDef hdma_usart1_tx;
DMA_HandleTypeDef hdma_usart2_tx;
DMA_HandleTypeDef hdma_usart2_rx;
DMA_HandleTypeDef hdma_usart3_rx;
DMA_HandleTypeDef hdma_usart3_tx;

osThreadId MainfunctionHandle;
osThreadId io_handleHandle;
osThreadId STC3115_handleHandle;
osThreadId Uc20_TaskHandle;
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_I2C1_Init(void);
static void MX_RTC_Init(void);
static void MX_SDIO_SD_Init(void);
static void MX_SPI1_Init(void);
static void MX_ADC1_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_TIM1_Init(void);
static void MX_USART3_UART_Init(void);
void MainfunctionTask(void const * argument);
void io_handle_cb(void const * argument);
void STC3115_handle_cb(void const * argument);
void Start_Uc20(void const * argument);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */




uint8_t code_pic2[]=
{

/*--  ������һ��ͼ��D:\liu\��ʾͼƬ\128642.bmp  --*/
/*--  ����x�߶�=128x64  --*/
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0xC1,0xF1,0xFD,0xFD,0x81,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0xC1,0xE1,0xF1,0xF9,0xF9,0xFD,0xFD,0xF9,0xF9,0x61,0xF1,0x51,
0x01,0x09,0x0D,0x0D,0x05,0x09,0x09,0x09,0x09,0x09,0x09,0x99,0xB9,0xC1,0x01,0x01,
0x01,0x81,0x81,0xC1,0xC1,0x81,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xE1,0xF1,0xF1,0xF1,
0xE1,0xC1,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xF1,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
0xFF,0x00,0x30,0x30,0x78,0x7C,0x7F,0x71,0x66,0x60,0x71,0x7F,0x7C,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x8F,0x7F,0x1F,0x1F,0x3F,0x7F,0xFE,0xFE,0xFA,0xF3,0xF6,
0xF6,0xC4,0x48,0x18,0x18,0x78,0xF8,0xF8,0xF8,0xFC,0xF4,0xF4,0xEF,0xE8,0x99,0x71,
0x06,0x1F,0xFF,0xFF,0xFF,0xFF,0x7F,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFE,0xFE,
0xFC,0x78,0x20,0x20,0x10,0x10,0x08,0x08,0x08,0x0C,0x04,0x04,0x07,0x07,0x0F,0x0F,
0x0F,0x0F,0x1F,0x10,0x10,0x20,0x20,0x40,0xC0,0x80,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x23,0x7C,0x48,
0x48,0x88,0x78,0x30,0x0C,0xE3,0xF0,0xF8,0xFC,0x1E,0x4E,0x4E,0x6F,0xDF,0x7D,0x31,
0x01,0x00,0x00,0x00,0xC0,0xB0,0x98,0x99,0x39,0xF9,0xF9,0xF9,0xF1,0xE1,0xC0,0x00,
0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x70,0x08,0x07,0x03,0x01,
0x00,0x80,0x80,0x84,0x84,0x00,0x08,0x00,0x00,0x00,0x02,0x01,0xC0,0xF0,0xF8,0xFC,
0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0x7C,0x7C,0x30,0x60,
0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x08,0x18,0x10,
0x10,0x3F,0xF8,0x60,0xC0,0x83,0x07,0x0F,0x0F,0x0E,0x0C,0x04,0x0E,0x8C,0x88,0x00,
0x80,0x00,0x00,0x00,0x00,0x04,0x0C,0x1D,0x1D,0x3F,0x3F,0x3F,0x3F,0x1F,0x0F,0x00,
0x00,0x80,0xE0,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xF1,0xFC,0xFC,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0x7E,0x7C,0x38,0x20,0x1F,0x3F,0xFF,0xFF,
0xCF,0xC7,0xE7,0xE3,0xF3,0xF3,0xF1,0xF9,0xF9,0xFC,0xFC,0xFC,0xFE,0x7E,0x3F,0x00,
0x01,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x03,0x1C,0x71,0x83,0x02,0xE4,0xFC,0x78,0x39,0x11,0x10,0x10,0x10,
0x20,0x20,0x20,0x20,0x20,0xE0,0xE0,0xE0,0x70,0x30,0x30,0x78,0xF8,0xFC,0xE4,0x02,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xCF,0x3F,0xFF,0xFF,0xC7,0xE7,0xE3,
0xF3,0xF3,0xF1,0xF9,0xF8,0xFC,0xFC,0xFC,0xFE,0xFE,0x7F,0x1F,0x03,0x00,0x00,0x01,
0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x01,0x80,0x40,0x20,
0x18,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0x1F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x04,0x10,0x60,0x00,0x00,0x03,0x07,0x18,
0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x08,0x11,0x31,0x23,0x43,
0x47,0xC7,0x87,0x87,0x87,0x83,0x03,0x03,0x01,0x00,0x00,0x04,0x04,0x84,0xA0,0x80,
0x80,0xC0,0xC0,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0xFE,0xC2,0xC1,0xE0,0xF0,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x3E,0x1E,0x0C,0x04,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x07,0x07,0x83,0x43,0x67,0xA7,0x27,
0x27,0x27,0xC7,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0xE0,0x20,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x87,0x90,0xA0,0xA0,0xC0,0xC1,0xC2,0xC2,0xA6,
0xB6,0xA2,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xA0,0x9E,0x8F,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x87,0xA8,0xA0,0xB8,0xA7,0xA2,
0x82,0x81,0xBD,0xA2,0xA2,0xB9,0xA7,0x90,0xB2,0x8F,0x83,0x82,0xB9,0xA7,0x80,0xB8,
0xA6,0xA1,0xB1,0xAF,0x90,0x80,0xBC,0xA2,0xA2,0xB9,0xA7,0x90,0x80,0x80,0x80,0xFF
};

uint8_t Rxdata[100];


int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(&huart3, (uint8_t *)ptr,len, 3000);
	for(int i =0;i<len;i++)
	{
		ITM_SendChar(*ptr);
		ptr++;
	}
	return len;
}

uint32_t st = 0;
float val = 0.01f;
//RTC_TimeTypeDef sTime = {0};
//RTC_DateTypeDef sDate = {0};

void App_Huart3_rx_callback(){
	HAL_UART_Receive_DMA(&huart3, Rxdata, 100);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_I2C1_Init();
  MX_RTC_Init();
  MX_SDIO_SD_Init();
  MX_SPI1_Init();
  MX_ADC1_Init();
  MX_USART1_UART_Init();
  MX_USART2_UART_Init();
  MX_TIM1_Init();
  MX_USART3_UART_Init();
  MX_FATFS_Init();
  /* USER CODE BEGIN 2 */
  SET_PWR_CTRL_GET_STATE();


  HAL_GPIO_WritePin(V_BLE_E_GPIO_Port, V_BLE_E_Pin, GPIO_PIN_RESET);
  HAL_Delay(10);
  HAL_GPIO_WritePin(V_BLE_E_GPIO_Port, V_BLE_E_Pin, GPIO_PIN_SET);
  //HAL_UART_Receive_DMA(&huart3, Rxdata, 100);

//	HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_RESET);
//
//	osDelay(10);
//	HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_SET);
//	uint8_t PICE,BLE;
//	while(1)
//	{
//		if(HAL_UART_Receive(&huart1,&PICE, 1,0)==HAL_OK)
//		{
//			HAL_UART_Transmit(&huart3, &PICE, 1, 0);
//		}
//		if(HAL_UART_Receive(&huart3,&BLE, 1,0)==HAL_OK)
//		{
//			HAL_UART_Transmit(&huart1, &BLE, 1, 0);
//		}
//	}


//  uint32_t Message_ID;
//  char *dt = "{\"APIKey\":\"9E95D850FD2096889E8B30102BB0FEF4\",\"StationID\":\"76-17-174-111-249-236\",\"Extention1\":\"10.834650\",\"Extention2\":\"106.700431\",\"Extention3\":\"1\",\"Extention4\":\"123\",\"Extention5\":\"string\",\"Extention6\":\"string\",\"Extention7\":\"string\",\"Extention8\":\"string\",\"Extention9\":\"string\",\"Extention10\":\"string\"}";
//
////  HAL_Delay(2000);
////  uint8_t cnt = 0;
////  uint8_t tranbuf[100];
//  while(1)
//  {
//
//	  HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
//	  HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
////	  HAL_UART_Transmit(&huart3, (uint8_t *)dt, strlen(dt), 1000);
//	  HAL_Delay(200);
////	  printf("hello world\n");
////	  HAL_UART_Transmit(&huart3, (uint8_t *)"AT\r\n",4, 1000);
////	  HAL_Delay(2000);
//  }



//  for(uint8_t i=0;i<10;i++)
//  {
//	  //HAL_GPIO_TogglePin(LD_GPIO_Port, LD_Pin);
//	  HAL_GPIO_WritePin(LD_GPIO_Port, LD_Pin, GPIO_PIN_RESET);
//	  HAL_Delay(100);
//	  HAL_GPIO_WritePin(LD_GPIO_Port, LD_Pin, GPIO_PIN_SET);
//	  HAL_Delay(100);
//  }

//  HAL_GPIO_WritePin(RS485_DE_GPIO_Port	, RS485_DE_Pin, GPIO_PIN_SET);
//
//  while(1)
//  {
//	  HAL_UART_Transmit(&huart2, (uint8_t *)"helloworld\n", 11, 1000);
//	  HAL_Delay(1000);
//  }
//
//  HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_RESET);
//  HAL_Delay(10);
//  HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_SET);
//  HAL_GPIO_WritePin(PCIE_WLAN_DIS_GPIO_Port	, PCIE_WLAN_DIS_Pin, GPIO_PIN_SET);
//  HAL_UART_Receive(&huart1, Rxdata, 100, 30000);
//
//  HAL_GPIO_WritePin(STC3115_RESET_GPIO_Port, STC3115_RESET_Pin, GPIO_PIN_RESET);
//   HAL_Delay(10);
//   HAL_GPIO_WritePin(STC3115_RESET_GPIO_Port, STC3115_RESET_Pin, GPIO_PIN_SET);
//   HAL_Delay(1000);
//   stc3115_Driver_main();
//   while(1)
//   {
//	   GasGauge_Task(&STC3115_ConfigData, &STC3115_BatteryData);
//	   HAL_Delay(5000);
//   }
  //ST7565_st7565_init();
//  ST7565_begin(10);
////  ST7565_clear_display();
////  ST7565_display();
//  ST7565_st7565_command(0xA4);
//  memset(st7565_buffer,0XFF,1024);
//  ST7565_refresh();
//  HAL_Delay(500);
//  memcpy(st7565_buffer,code_pic2,1024);
//  ST7565_refresh();
//  //ST7565_clear_display();
//  HAL_Delay(500);
//  memset(st7565_buffer,0x00,1024);
//  ST7565_refresh();
//  //ST7565_fill(code_pic2);
//  HAL_Delay(500);

  //draw_hello_world();
  //lv_ex_img_1();
//  uint32_t tt = HAL_GetTick()+300;
//  int cnt = 0;
//	while (1) {
//		lv_task_handler();
//		HAL_Delay(1000); // 5ms
//		if(HAL_GetTick() >tt )
//		{
//			tt = HAL_GetTick()+300;
//			val += 1.01;
//			//Sys_Update_Data(val);
//		}
//
//		cnt++;
//	}
//
// // ST7565_fill(0, 0, 127, 63, color);
//  while(1)
//  {
//	  //HAL_GPIO_TogglePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin);
//	  memset(st7565_buffer,0XFF,1024);
//	  ST7565_refresh();
//	  HAL_Delay(1000);
//	  memcpy(st7565_buffer,code_pic2,1024);
//	  ST7565_refresh();
//	  //ST7565_clear_display();
//	  HAL_Delay(1000);
//	  memset(st7565_buffer,0x00,1024);
//	  ST7565_refresh();
//	  //ST7565_fill(code_pic2);
//	  HAL_Delay(1000);
//  }
//  ST7565_drawchar(20, 20, 'h');
//  HAL_Delay(10000);
//  while(1)
//  {
//	  if(SET_PWR_CTRL_GET_STATE())
//	  {
//		  if( Pwr_State == BTN_RELEASE)
//		  {
//			  HAL_Delay(15);
//			  if(SET_PWR_CTRL_GET_STATE())
//			  {
//				  Pwr_State = BTN_START_PRESS;
//				  timett = HAL_GetTick();
//			  }
//		  }
//	  }
//	  else {
//			if(Pwr_State == BTN_START_PRESS)
//			{
//				if(!SET_PWR_CTRL_GET_STATE())
//				{
//					Pwr_State = BTN_RELEASE;
//					timett = HAL_GetTick() - timett;
//					if(timett > 3000)
//					{
//						HAL_GPIO_WritePin(PWR_OFF_GPIO_Port, PWR_OFF_Pin, GPIO_PIN_SET);
//					}
//				}
//			}
//		}
//
//	  HAL_Delay(10);
//  }
//  HAL_Delay(10000);
//  HAL_GPIO_WritePin(PWR_OFF_GPIO_Port, PWR_OFF_Pin, GPIO_PIN_SET);
  /* USER CODE END 2 */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of Mainfunction */
  osThreadDef(Mainfunction, MainfunctionTask, osPriorityNormal, 0, 3096);
  MainfunctionHandle = osThreadCreate(osThread(Mainfunction), NULL);

  /* definition and creation of io_handle */
  osThreadDef(io_handle, io_handle_cb, osPriorityAboveNormal, 0, 1024);
  io_handleHandle = osThreadCreate(osThread(io_handle), NULL);

  /* definition and creation of STC3115_handle */
  osThreadDef(STC3115_handle, STC3115_handle_cb, osPriorityNormal, 0, 1024);
  STC3115_handleHandle = osThreadCreate(osThread(STC3115_handle), NULL);

  /* definition and creation of Uc20_Task */
  osThreadDef(Uc20_Task, Start_Uc20, osPriorityNormal, 0, 2048);
  Uc20_TaskHandle = osThreadCreate(osThread(Uc20_Task), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();

  /* We should never get here as control is now taken by the scheduler */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE|RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 96;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInitStruct.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */
  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV2;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 400000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief RTC Initialization Function
  * @param None
  * @retval None
  */
static void MX_RTC_Init(void)
{

  /* USER CODE BEGIN RTC_Init 0 */

  /* USER CODE END RTC_Init 0 */

  RTC_TimeTypeDef sTime = {0};
  RTC_DateTypeDef sDate = {0};

  /* USER CODE BEGIN RTC_Init 1 */

  /* USER CODE END RTC_Init 1 */
  /** Initialize RTC Only
  */
  hrtc.Instance = RTC;
  hrtc.Init.HourFormat = RTC_HOURFORMAT_24;
  hrtc.Init.AsynchPrediv = 127;
  hrtc.Init.SynchPrediv = 255;
  hrtc.Init.OutPut = RTC_OUTPUT_DISABLE;
  hrtc.Init.OutPutPolarity = RTC_OUTPUT_POLARITY_HIGH;
  hrtc.Init.OutPutType = RTC_OUTPUT_TYPE_OPENDRAIN;
  if (HAL_RTC_Init(&hrtc) != HAL_OK)
  {
    Error_Handler();
  }

  /* USER CODE BEGIN Check_RTC_BKUP */
  if(HAL_RTCEx_BKUPRead(&hrtc, 19)!= 1234)
  {
	  HAL_RTCEx_BKUPWrite(&hrtc, 19, 1234);
  /* USER CODE END Check_RTC_BKUP */

  /** Initialize RTC and set the Time and Date
  */
  sTime.Hours = 14;
  sTime.Minutes = 46;
  sTime.Seconds = 00;
  sTime.DayLightSaving = RTC_DAYLIGHTSAVING_NONE;
  sTime.StoreOperation = RTC_STOREOPERATION_RESET;
  if (HAL_RTC_SetTime(&hrtc, &sTime, RTC_FORMAT_BIN) != HAL_OK)
  {
    Error_Handler();
  }
  sDate.WeekDay = RTC_WEEKDAY_FRIDAY;
  sDate.Month = RTC_MONTH_DECEMBER;
  sDate.Date = 18;
  sDate.Year = 20;

  if (HAL_RTC_SetDate(&hrtc, &sDate, RTC_FORMAT_BIN) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN RTC_Init 2 */
  }
  /* USER CODE END RTC_Init 2 */

}

/**
  * @brief SDIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_SDIO_SD_Init(void)
{

  /* USER CODE BEGIN SDIO_Init 0 */

  /* USER CODE END SDIO_Init 0 */

  /* USER CODE BEGIN SDIO_Init 1 */

  /* USER CODE END SDIO_Init 1 */
  hsd.Instance = SDIO;
  hsd.Init.ClockEdge = SDIO_CLOCK_EDGE_RISING;
  hsd.Init.ClockBypass = SDIO_CLOCK_BYPASS_DISABLE;
  hsd.Init.ClockPowerSave = SDIO_CLOCK_POWER_SAVE_DISABLE;
  hsd.Init.BusWide = SDIO_BUS_WIDE_1B;
  hsd.Init.HardwareFlowControl = SDIO_HARDWARE_FLOW_CONTROL_DISABLE;
  hsd.Init.ClockDiv = 10;
  /* USER CODE BEGIN SDIO_Init 2 */

  /* USER CODE END SDIO_Init 2 */

}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{

  /* USER CODE BEGIN SPI1_Init 0 */

  /* USER CODE END SPI1_Init 0 */

  /* USER CODE BEGIN SPI1_Init 1 */

  /* USER CODE END SPI1_Init 1 */
  /* SPI1 parameter configuration*/
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_MASTER;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi1.Init.NSS = SPI_NSS_SOFT;
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI1_Init 2 */

  /* USER CODE END SPI1_Init 2 */

}

/**
  * @brief TIM1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM1_Init(void)
{

  /* USER CODE BEGIN TIM1_Init 0 */

  /* USER CODE END TIM1_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM1_Init 1 */

  /* USER CODE END TIM1_Init 1 */
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 95;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 999;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM1_Init 2 */

  /* USER CODE END TIM1_Init 2 */

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 9600;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief USART3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART3_UART_Init(void)
{

  /* USER CODE BEGIN USART3_Init 0 */

  /* USER CODE END USART3_Init 0 */

  /* USER CODE BEGIN USART3_Init 1 */

  /* USER CODE END USART3_Init 1 */
  huart3.Instance = USART3;
  huart3.Init.BaudRate = 115200;
  huart3.Init.WordLength = UART_WORDLENGTH_8B;
  huart3.Init.StopBits = UART_STOPBITS_1;
  huart3.Init.Parity = UART_PARITY_NONE;
  huart3.Init.Mode = UART_MODE_TX_RX;
  huart3.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart3.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart3) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART3_Init 2 */

  /* USER CODE END USART3_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Stream1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream1_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream1_IRQn);
  /* DMA1_Stream3_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream3_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream3_IRQn);
  /* DMA1_Stream5_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream5_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream5_IRQn);
  /* DMA1_Stream6_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream6_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream6_IRQn);
  /* DMA2_Stream2_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream2_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream2_IRQn);
  /* DMA2_Stream3_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream3_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream3_IRQn);
  /* DMA2_Stream5_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream5_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream5_IRQn);
  /* DMA2_Stream6_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream6_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream6_IRQn);
  /* DMA2_Stream7_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream7_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream7_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, PWR_OFF_Pin|PWR_CTRL_Pin|LCD_RS_Pin|LCD_RST_Pin
                          |LCD_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RS485_DE_Pin|V_BOOT_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LD_Pin|V_BLE_E_Pin|PCIE_RST_Pin|PCIE_WLAN_DIS_Pin
                          |STC3115_RESET_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : PWR_OFF_Pin */
  GPIO_InitStruct.Pin = PWR_OFF_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(PWR_OFF_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PWR_CTRL_Pin LCD_RS_Pin LCD_RST_Pin LCD_CS_Pin */
  GPIO_InitStruct.Pin = PWR_CTRL_Pin|LCD_RS_Pin|LCD_RST_Pin|LCD_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : RS485_DE_Pin V_BOOT_EN_Pin */
  GPIO_InitStruct.Pin = RS485_DE_Pin|V_BOOT_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LD_Pin V_BLE_E_Pin PCIE_RST_Pin PCIE_WLAN_DIS_Pin
                           STC3115_RESET_Pin */
  GPIO_InitStruct.Pin = LD_Pin|V_BLE_E_Pin|PCIE_RST_Pin|PCIE_WLAN_DIS_Pin
                          |STC3115_RESET_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : BTN_DOWN_Pin BTN_EXIT_Pin BTN_UP_Pin BTN_MENU_Pin */
  GPIO_InitStruct.Pin = BTN_DOWN_Pin|BTN_EXIT_Pin|BTN_UP_Pin|BTN_MENU_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* USER CODE BEGIN Header_MainfunctionTask */
/**
  * @brief  Function implementing the Mainfunction thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_MainfunctionTask */
__weak void MainfunctionTask(void const * argument)
{
  /* init code for USB_DEVICE */
  MX_USB_DEVICE_Init();
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */
}

/* USER CODE BEGIN Header_io_handle_cb */
/**
* @brief Function implementing the io_handle thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_io_handle_cb */
__weak void io_handle_cb(void const * argument)
{
  /* USER CODE BEGIN io_handle_cb */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END io_handle_cb */
}

/* USER CODE BEGIN Header_STC3115_handle_cb */
/**
* @brief Function implementing the STC3115_handle thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_STC3115_handle_cb */
__weak void STC3115_handle_cb(void const * argument)
{
  /* USER CODE BEGIN STC3115_handle_cb */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END STC3115_handle_cb */
}

/* USER CODE BEGIN Header_Start_Uc20 */
/**
* @brief Function implementing the Uc20_Task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Start_Uc20 */
__weak void Start_Uc20(void const * argument)
{
  /* USER CODE BEGIN Start_Uc20 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END Start_Uc20 */
}

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM7 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */
  if (htim->Instance == TIM7) {
	lv_tick_inc(1);
  }
  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM7) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
