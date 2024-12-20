/*
 * structptr.c
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

void struct_passed_by_reference(struct dataSet *ptr);
void struct_passed_by_value(struct dataSet data_cpy);

int main() {
	struct dataSet data;

	data.data1 = 0x11;
	data.data2 = 0xffffeeee;
	data.data3 = 0x22;
	data.data4 = 0xabcd;

	printf("data1 value before = %x\n", data.data1);

	struct dataSet *ptr = &data;

	ptr->data1 = 0x55;

	printf("data1 value after = %x\n", data.data1);

	struct_passed_by_reference(&data);

	struct_passed_by_value(data);

}

void struct_passed_by_reference(struct dataSet *ptr) {
	printf("value of data1 = %x\n", ptr->data1);
}

void struct_passed_by_value(struct dataSet data_cpy) {
	printf("value of data1 = %x\n", data_cpy.data1);
}
