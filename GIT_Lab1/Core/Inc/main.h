/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_RED1_Pin GPIO_PIN_2
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_3
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_4
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define SEG_A_Pin GPIO_PIN_0
#define SEG_A_GPIO_Port GPIOB
#define SEG_B_Pin GPIO_PIN_1
#define SEG_B_GPIO_Port GPIOB
#define SEG_C_Pin GPIO_PIN_2
#define SEG_C_GPIO_Port GPIOB
#define SEG_D1_Pin GPIO_PIN_10
#define SEG_D1_GPIO_Port GPIOB
#define SEG_E1_Pin GPIO_PIN_11
#define SEG_E1_GPIO_Port GPIOB
#define SEG_F1_Pin GPIO_PIN_12
#define SEG_F1_GPIO_Port GPIOB
#define SEG_G1_Pin GPIO_PIN_13
#define SEG_G1_GPIO_Port GPIOB
#define LED_5_Pin GPIO_PIN_8
#define LED_5_GPIO_Port GPIOA
#define LED_6_Pin GPIO_PIN_9
#define LED_6_GPIO_Port GPIOA
#define LED_7_Pin GPIO_PIN_10
#define LED_7_GPIO_Port GPIOA
#define LED_8_Pin GPIO_PIN_11
#define LED_8_GPIO_Port GPIOA
#define LED_9_Pin GPIO_PIN_12
#define LED_9_GPIO_Port GPIOA
#define LED_10_Pin GPIO_PIN_13
#define LED_10_GPIO_Port GPIOA
#define LED_11_Pin GPIO_PIN_14
#define LED_11_GPIO_Port GPIOA
#define LED_12_Pin GPIO_PIN_15
#define LED_12_GPIO_Port GPIOA
#define LED_D_Pin GPIO_PIN_3
#define LED_D_GPIO_Port GPIOB
#define LED_E_Pin GPIO_PIN_4
#define LED_E_GPIO_Port GPIOB
#define LED_F_Pin GPIO_PIN_5
#define LED_F_GPIO_Port GPIOB
#define LED_G_Pin GPIO_PIN_6
#define LED_G_GPIO_Port GPIOB
#define SEG_A1_Pin GPIO_PIN_7
#define SEG_A1_GPIO_Port GPIOB
#define SEG_B1_Pin GPIO_PIN_8
#define SEG_B1_GPIO_Port GPIOB
#define SEG_C1_Pin GPIO_PIN_9
#define SEG_C1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
