/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#include "main.h"

int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCtrlReg = (RCC_AHB1ENR_t*)(0x40023800U + 0x30);
	GPIOx_MODER_t volatile *const pGpioAModeReg = (GPIOx_MODER_t*)(0x40020000U + 0x00);
	GPIOx_ODR_t   volatile *const pGPIOAOutReg = (GPIOx_ODR_t*)(0x40020000U + 0x14);

	pClkCtrlReg->gpioa_en = 1;

	pGpioAModeReg->pin5 = 0;
	pGpioAModeReg->pin5 = 1;

	while(1) {
		pGPIOAOutReg->pin5 = 1;

		for(uint32_t i = 0; i < 300000; i++);

		pGPIOAOutReg->pin5 = 0;

		for(uint32_t i = 0; i < 300000; i++);
	}
}