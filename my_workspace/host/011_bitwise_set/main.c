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
	int  bkp = num1;
	num1 = num1 | 0x90; //num1 | 0x10010000 //setting of bits
		printf("[input] [output] 0x%x 0x%x\n", bkp, num1);
	int num2 = bkp;
	num2 = num2 & ~(0x70); //clearing og bits
	printf("[input] [output] 0x%x 0x%x\n", bkp, num2);

	int num3 = bkp; //toggling of bits
	num3 = num3 ^ 0x01; //toggle the last bit
	printf("[input] [output] 0x%x 0x%x\n", bkp, num3);
	return 0;
}

