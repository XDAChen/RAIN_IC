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
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32l4xx_hal.h"

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
#define PA_SW_V1_Pin GPIO_PIN_0
#define PA_SW_V1_GPIO_Port GPIOA
#define RX_Pin GPIO_PIN_2
#define RX_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_3
#define TX_GPIO_Port GPIOA
#define NCS_Pin GPIO_PIN_4
#define NCS_GPIO_Port GPIOA
#define CLK_Pin GPIO_PIN_5
#define CLK_GPIO_Port GPIOA
#define MISO_Pin GPIO_PIN_6
#define MISO_GPIO_Port GPIOA
#define MOSI_Pin GPIO_PIN_7
#define MOSI_GPIO_Port GPIOA
#define PA_SW_V2_Pin GPIO_PIN_5
#define PA_SW_V2_GPIO_Port GPIOC
#define ANT1_LED_Pin GPIO_PIN_1
#define ANT1_LED_GPIO_Port GPIOB
#define ANT1_LEDB2_Pin GPIO_PIN_2
#define ANT1_LEDB2_GPIO_Port GPIOB
#define ANT_SW_V1_Pin GPIO_PIN_10
#define ANT_SW_V1_GPIO_Port GPIOB
#define ANT_SW_V2_Pin GPIO_PIN_11
#define ANT_SW_V2_GPIO_Port GPIOB
#define PLL_LED_Pin GPIO_PIN_12
#define PLL_LED_GPIO_Port GPIOB
#define OSC_LED_Pin GPIO_PIN_13
#define OSC_LED_GPIO_Port GPIOB
#define NO_RESP_LED_Pin GPIO_PIN_14
#define NO_RESP_LED_GPIO_Port GPIOB
#define CRC_ERR_LED_Pin GPIO_PIN_15
#define CRC_ERR_LED_GPIO_Port GPIOB
#define TAG_LED_Pin GPIO_PIN_6
#define TAG_LED_GPIO_Port GPIOC
#define SYNC_OUT_Pin GPIO_PIN_8
#define SYNC_OUT_GPIO_Port GPIOC
#define IRQ_Pin GPIO_PIN_9
#define IRQ_GPIO_Port GPIOA
#define IRQ_EXTI_IRQn EXTI9_5_IRQn
#define EN_Pin GPIO_PIN_10
#define EN_GPIO_Port GPIOA
#define RF_LED_Pin GPIO_PIN_10
#define RF_LED_GPIO_Port GPIOC
#define TUNED_LED_Pin GPIO_PIN_11
#define TUNED_LED_GPIO_Port GPIOC
#define TUNNING_LED_Pin GPIO_PIN_12
#define TUNNING_LED_GPIO_Port GPIOC
#define intPA_LED_Pin GPIO_PIN_2
#define intPA_LED_GPIO_Port GPIOD
#define extPA_LED_Pin GPIO_PIN_4
#define extPA_LED_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
