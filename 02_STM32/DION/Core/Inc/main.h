/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

/* USER CODE BEGIN Private defines */
/* 两个按键的引脚定义: PB11 -> START(开始), PB12 -> JUMP(跳跃)。
 * 均为上拉输入, 按下时引脚被拉到 GND, 所以读到 GPIO_PIN_RESET 表示按下。
 * 放在 USER CODE 区并加 #ifndef 保护: 即使以后 CubeMX 重新生成 main.h
 * 时在上面(生成区)写回同名宏, 也不会重复定义或冲突。 */
#ifndef START_Pin
#define START_Pin GPIO_PIN_11
#endif
#ifndef START_GPIO_Port
#define START_GPIO_Port GPIOB
#endif
#ifndef JUMP_Pin
#define JUMP_Pin GPIO_PIN_12
#endif
#ifndef JUMP_GPIO_Port
#define JUMP_GPIO_Port GPIOB
#endif
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
