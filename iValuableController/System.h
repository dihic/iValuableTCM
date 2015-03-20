#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "stm32f4xx_hal_conf.h"         // Keil::Device:STM32Cube Framework:Classic
#include "stm32f4xx.h"                  // Device header
#include "Driver_CAN.h"
#include "Driver_USART.h"               // ::CMSIS Driver:USART

//#define DEBUG_PRINT

#define STATUS_PIN		GPIOC,GPIO_PIN_8

extern ARM_DRIVER_CAN Driver_CAN1;
extern ARM_DRIVER_USART Driver_USART1;
extern ARM_DRIVER_USART Driver_USART3;

extern RNG_HandleTypeDef RNGHandle;

#define USER_ADDR 0x080E0000
#define CARD_ADDR 0x080E8000
#define BACK_ADDR 0x080C0000

extern const uint8_t *UserFlash;

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

//void EraseFlash(void);
//void PrepareWriteFlash(uint32_t addr, uint32_t size);
	
#ifdef __cplusplus
}
#endif  /* __cplusplus */

#define GET_RANDOM_NUMBER HAL_RNG_GetRandomNumber(&RNGHandle)

#endif
