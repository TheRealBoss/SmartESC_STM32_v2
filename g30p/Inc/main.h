/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "product.h"
#include "ninebot.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern CRC_HandleTypeDef hcrc;

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern DMA_HandleTypeDef hdma_usart1_rx;
extern DMA_HandleTypeDef hdma_usart1_tx;
extern DMA_HandleTypeDef hdma_usart2_tx;
extern DMA_HandleTypeDef hdma_usart2_rx;
extern DMA_HandleTypeDef hdma_usart3_tx;
extern DMA_HandleTypeDef hdma_usart3_rx;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWR_BTN_Pin GPIO_PIN_12
#define PWR_BTN_GPIO_Port GPIOA
#define UNUSED4_Pin GPIO_PIN_15
#define UNUSED4_GPIO_Port GPIOC
#define UNUSED3_Pin GPIO_PIN_0
#define UNUSED3_GPIO_Port GPIOD
#define UNUSED2_Pin GPIO_PIN_1
#define UNUSED2_GPIO_Port GPIOD
#define MAIN_CURR_AMPL_Pin GPIO_PIN_0
#define MAIN_CURR_AMPL_GPIO_Port GPIOA
#define M1_BUS_VOLTAGE_Pin GPIO_PIN_1
#define M1_BUS_VOLTAGE_GPIO_Port GPIOA
#define UART2_RXTX_Pin GPIO_PIN_2
#define UART2_RXTX_GPIO_Port GPIOA
#define M1_CURR_AMPL_U_Pin GPIO_PIN_3
#define M1_CURR_AMPL_U_GPIO_Port GPIOA
#define M1_CURR_AMPL_V_Pin GPIO_PIN_4
#define M1_CURR_AMPL_V_GPIO_Port GPIOA
#define M1_CURR_AMPL_W_Pin GPIO_PIN_5
#define M1_CURR_AMPL_W_GPIO_Port GPIOA
#define M1_HALL_H3_Pin GPIO_PIN_0
#define M1_HALL_H3_GPIO_Port GPIOB
#define UART3_TX_Pin GPIO_PIN_10
#define UART3_TX_GPIO_Port GPIOB
#define UART3_RX_Pin GPIO_PIN_11
#define UART3_RX_GPIO_Port GPIOB
#define M1_PWM_UL_Pin GPIO_PIN_13
#define M1_PWM_UL_GPIO_Port GPIOB
#define M1_PWM_VL_Pin GPIO_PIN_14
#define M1_PWM_VL_GPIO_Port GPIOB
#define M1_PWM_WL_Pin GPIO_PIN_15
#define M1_PWM_WL_GPIO_Port GPIOB
#define M1_PWM_UH_Pin GPIO_PIN_8
#define M1_PWM_UH_GPIO_Port GPIOA
#define M1_PWM_VH_Pin GPIO_PIN_9
#define M1_PWM_VH_GPIO_Port GPIOA
#define M1_PWM_WH_Pin GPIO_PIN_10
#define M1_PWM_WH_GPIO_Port GPIOA
#define TPS_ENA_Pin GPIO_PIN_11
#define TPS_ENA_GPIO_Port GPIOA
#define UNUSED1_Pin GPIO_PIN_14
#define UNUSED1_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_15
#define LED_GPIO_Port GPIOA
#define M1_HALL_H1_Pin GPIO_PIN_4
#define M1_HALL_H1_GPIO_Port GPIOB
#define M1_HALL_H2_Pin GPIO_PIN_5
#define M1_HALL_H2_GPIO_Port GPIOB
#define UART1_TX_Pin GPIO_PIN_6
#define UART1_TX_GPIO_Port GPIOB
#define UART1_RX_Pin GPIO_PIN_7
#define UART1_RX_GPIO_Port GPIOB
#define REAR_LED_Pin GPIO_PIN_9
#define REAR_LED_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
