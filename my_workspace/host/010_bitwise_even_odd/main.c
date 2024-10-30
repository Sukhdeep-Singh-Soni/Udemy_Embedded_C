/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {
	int num1;
	printf("Enter a number for even or odd check: ");
	scanf("%d",&num1);

	if((num1 & 0x1)) {
		printf("odd\n");
	} else {
		printf("even\n");
	}
	return 0;
}
