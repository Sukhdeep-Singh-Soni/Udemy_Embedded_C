/*
 * const.c
 *
 *  Created on: Oct 31, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

/*if define const var in global space it goes in read only memory*/
	uint8_t const data = 50; //application might crash if try to change
							//value from read only memory.
int main() {
#if 0
	/*will exist in ram and read-only but pointer can change value*/
	uint8_t const data = 50; //&data is of type (uint8_t const *)
#endif
	printf("data : %u\n", data);
#if 0
	data = 56; //if try to change const variable by name compiler gives error
#endif
	uint8_t *ptr = (uint8_t*)&data; //data type mismatch const qualifier discards
	*ptr = 56;
	printf("data : %u\n", data);

}
