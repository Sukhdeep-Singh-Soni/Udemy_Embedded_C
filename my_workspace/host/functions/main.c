/*
 * main.c
 *
 *  Created on: Oct 25, 2024
 *      Author: deep
 */

#include <stdio.h>
#include "math.h"

int function_to_add(int, int, int);

int main() {
//	function_to_add(10, 30, 50);
//	function_to_add(20, -20, 14);
//
//	int var1 = 40, var2 = 60;
//	function_to_add(var1, var2, 56);
//
//	int ret;
//
//	ret = function_to_add(var1, var2, 80);
//
//	printf("sum = %d\n", ret);
	printf("sum = %x\n", math_add(0x0fffff11, 0x0fffff11));
	printf("sub = %x\n", math_sub(20, 70));
	printf("mul = %llx\n", math_mul(0x0fffff11, 0x0fffff11));
	printf("div = %0.2f\n", math_div(100, 8));

}

int function_to_add(int a, int b, int c) {
	int sum;
	sum = a + b + c;
//	printf("sum = %d\n",sum);
	return sum;
}
