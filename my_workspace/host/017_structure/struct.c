/*
 * struct.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

struct carModel {
	uint32_t carNumber;
	float    carWeight;
	uint32_t carMaxspeed;
	uint32_t carPrice;
};

int main() {

	struct carModel BMW = {1987, 201.45, 300, 100000}; //c89 standard method
	struct carModel Ford = {.carMaxspeed = 380, .carNumber = 3412,
							.carPrice = 350000, .carWeight = 300};

	printf("Features of car BMW\n");
	printf("	- MAX_SPEED = %d\n",BMW.carMaxspeed);
	printf("	- NUMBER    = %d\n",BMW.carNumber);
	printf("	- PRICE     = %d\n",BMW.carPrice);
	printf("	- WEIGHT    = %f\n",BMW.carWeight);

	Ford.carMaxspeed = 450;

	printf("Features of car Ford\n");
	printf("	- MAX_SPEED = %d\n",Ford.carMaxspeed);
	printf("	- NUMBER    = %d\n",Ford.carNumber);
	printf("	- PRICE     = %d\n",Ford.carPrice);
	printf("	- WEIGHT    = %f\n",Ford.carWeight);

}
