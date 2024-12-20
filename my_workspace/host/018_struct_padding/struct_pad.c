/*
 * struct_pad.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

struct dataSet {
	char  data1;
	int   data2;
	char  data3;
	short data4;
};

int main() {
	struct dataSet data;

	data.data1 = 0x11;
	data.data2 = 0xffffeeee;
	data.data3 = 0x22;
	data.data4 = 0xabcd;

	uint32_t total_size = sizeof(struct dataSet);
	uint8_t *ptr = (uint8_t*)&data;

	printf("Memory			data\n");
	printf("--------------------\n");

	for(int i = 0; i < total_size; i++) {
		printf("%p			0x%X\n", ptr, *ptr);
		ptr++;
	}

	printf("Total memory consumed by structure = %d\n", total_size);
	getchar();
}

