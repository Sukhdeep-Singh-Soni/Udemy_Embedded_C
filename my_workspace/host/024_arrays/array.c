/*
 * array.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */


#include <stdio.h>
#include <stdint.h>

void passing_array(uint8_t const *const parray, uint32_t size);

int main() {

	uint32_t array[100];
	printf("size of array = %ld\n", sizeof(array));
	printf("Base address of array = %p\n", array);

	uint8_t somedata[10] = {0xff, 0xff, 0xff};

	for(uint32_t i = 0; i < 10; i++) {
//		somedata[i] = 0xff;
//		printf("%x\t", somedata[i]);
		somedata[i] = i;
	}

//	somedata[2] = 0x33;
//	*(somedata+3) = 0x54;

//	printf("\n");
//	for(uint32_t i = 0; i < 10; i++) {
//		printf("%x\t", somedata[i]);
//	}

	uint32_t n = sizeof(somedata) / sizeof(uint8_t);
	passing_array(somedata, n);
	passing_array((somedata + 2), n-2);
	passing_array(&somedata[4], n-4);

}

void passing_array(uint8_t const *const parray, uint32_t size) {
	printf("\n");
	for(uint32_t i = 0; i < size; i++) {
		printf("%x\t", parray[i]); //*(parray + i) same
	}
}
