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
	RCC_AHB1ENR_t volatile *const pClkCtrlReg = RCC_AHB1ENR_REG_ADDR;
	GPIOx_MODER_t volatile *const pGpioAModeReg = GPIOA_MODE_REG_ADDR;
	GPIOx_ODR_t   volatile *const pGPIOAOutReg = GPIOA_OUTPUT_REG_ADDR;

	pClkCtrlReg->gpioa_en = CLOCK_EN;

	pGpioAModeReg->pin5 = CLEAR_BITS;
	pGpioAModeReg->pin5 = MODE_CONF_OUTPUT;

	while(1) {
		pGPIOAOutReg->pin5 = PIN_STATE_HIGH;

		for(uint32_t i = 0; i < DELAY_COUNT; i++);

		pGPIOAOutReg->pin5 = PIN_STATE_LOW;

		for(uint32_t i = 0; i < DELAY_COUNT; i++);
	}
}
