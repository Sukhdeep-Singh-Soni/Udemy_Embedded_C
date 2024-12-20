/*
 * swap.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
void display_array(int32_t const *const parr, uint32_t n);
void swap_array(int32_t *const parr1, int32_t *const parr2,
				uint32_t n1, uint32_t n2);

int main() {

	uint32_t n1, n2;

	printf("Array Swap program\n");
	printf("Enter the lengths of arrays [array1] [array2] : ");
	scanf("%u %u", &n1, &n2);

	if((n1 < 0) || (n2 < 0)) {
		printf("length of array cannot be -ve\n");
		wait_for_user_input();
		return 0;
	}

	int32_t arr1[n1];
	int32_t arr2[n2];

	for(uint32_t i = 0; i < n1; i++) {
		printf("Enter %d element of array1 : ",i);
		scanf("%d",&arr1[i]);
	}

	for(uint32_t i = 0; i < n2; i++) {
		printf("Enter %d element of array2 : ",i);
		scanf("%d",&arr2[i]);
	}

	printf("Arrays before swap\n");

	display_array(arr1, n1);

	printf("\n");

	display_array(arr2, n2);

	printf("\n");

	swap_array(arr1, arr2, n1, n2);

	printf("Arrays after swap\n");

	display_array(arr1, n1);

	printf("\n");

	display_array(arr2, n2);

	printf("\n");

	wait_for_user_input();

	return 0;
}

void display_array(int32_t const *const parr, uint32_t n) {

	for(uint32_t i = 0; i < n; i++) {
		printf("%4d  ", parr[i]);
	}
}

void swap_array(int32_t *const parr1, int32_t *const parr2,
				uint32_t n1, uint32_t n2)
{

	uint32_t len = (n1 < n2) ? n1 : n2;

	for(uint32_t i = 0; i < len; i++) {
		uint32_t temp = parr1[i];
		parr1[i] = parr2[i];
		parr2[i] = temp;
	}
}


void wait_for_user_input(void) {
	while(getchar() != '\n');
	getchar();
}



