/*
 * main.h
 *
 *  Created on: Nov 2, 2024
 *      Author: deep
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
	uint32_t gpioa_en	:1;
	uint32_t gpiob_en	:1;
	uint32_t gpioc_en	:1;
	uint32_t gpiod_en	:1;
	uint32_t gpioe_en	:1;
	uint32_t reserved1	:2;
	uint32_t gpioh_en	:1;
	uint32_t reserved2	:4;
	uint32_t crc_en		:1;
	uint32_t reserved3	:8;
	uint32_t dma1_en	:1;
	uint32_t dma2_en	:1;
	uint32_t reserved4	:9;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t pin0	:2;
	uint32_t pin1	:2;
	uint32_t pin2	:2;
	uint32_t pin3	:2;
	uint32_t pin4	:2;
	uint32_t pin5	:2;
	uint32_t pin6	:2;
	uint32_t pin7	:2;
	uint32_t pin8	:2;
	uint32_t pin9	:2;
	uint32_t pin10	:2;
	uint32_t pin11	:2;
	uint32_t pin12	:2;
	uint32_t pin13	:2;
	uint32_t pin14	:2;
	uint32_t pin15	:2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t pin0	:1;
	uint32_t pin1	:1;
	uint32_t pin2	:1;
	uint32_t pin3	:1;
	uint32_t pin4	:1;
	uint32_t pin5	:1;
	uint32_t pin6	:1;
	uint32_t pin7	:1;
	uint32_t pin8	:1;
	uint32_t pin9	:1;
	uint32_t pin10	:1;
	uint32_t pin11	:1;
	uint32_t pin12	:1;
	uint32_t pin13	:1;
	uint32_t pin14	:1;
	uint32_t pin15	:1;
	uint32_t reserved :16;
}GPIOx_ODR_t;

#define RCC_AHB1ENR_REG_ADDR	((RCC_AHB1ENR_t*)(0x40023800U + 0x30))
#define GPIOA_MODE_REG_ADDR		((GPIOx_MODER_t*)(0x40020000U + 0x00))
#define GPIOA_OUTPUT_REG_ADDR	((GPIOx_ODR_t*)(0x40020000U + 0x14))

#define CLOCK_EN			(1)
#define CLEAR_BITS			(0)
#define MODE_CONF_OUTPUT	(1)
#define PIN_STATE_HIGH		(1)
#define PIN_STATE_LOW		(0)

#define DELAY_COUNT			(300000UL)

#endif /* MAIN_H_ */
