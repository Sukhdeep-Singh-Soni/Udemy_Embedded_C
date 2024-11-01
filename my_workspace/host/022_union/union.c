/*
 * union.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

union data {
	uint16_t short_addr;
	uint32_t long_addr;
};

int main() {
	union data var1;

	var1.short_addr = 0xabcd;
	printf("short addr before = %#x\n",var1.short_addr);
	var1.long_addr = 0xcccceeee;
	printf("short addr = %#x\n", var1.short_addr);
	printf("long addr = %#x\n", var1.long_addr);

}
