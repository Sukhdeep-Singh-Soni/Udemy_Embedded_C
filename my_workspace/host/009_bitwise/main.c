/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

int main() {

	int32_t num1, num2;
	printf("Enter 2 numbers(give space b/w 2 nos)");
	scanf("%d %d",&num1, &num2);

	printf("Bitwise & = %d\n", (num1 & num2));
	printf("Bitwise | = %d\n", (num1 | num2));
	printf("Bitwise ^ = %d\n", (num1 ^ num2));
	printf("Bitwise ~ = %d\n", (!num1));
	return 0;
}

