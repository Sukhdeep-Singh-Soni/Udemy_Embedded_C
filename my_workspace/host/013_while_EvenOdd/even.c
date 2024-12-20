/*
 * even.c
 *
 *  Created on: Oct 31, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_to_exit(void);

int main() {

	int32_t startnum, endnum;
	uint32_t evencnt;
	printf("Enter 2 integers: [start number] [end number]");
	scanf("%d %d", &startnum, &endnum);

	if(startnum > endnum) {
		//error
		printf("start number must be smaller than end number\n");
		wait_for_user_to_exit();
		return 0;
	}

	evencnt = 0;
	while(startnum <= endnum) {
		if( !(startnum % 2)) {
			printf("%4d\t", startnum);
			evencnt++;
		}
		startnum++;
	}

	printf("\nTotal number of even numbers : %u\n", evencnt);
	wait_for_user_to_exit();
	return 0;

}

void wait_for_user_to_exit(void) {
	printf("Press enter to exit...");
	while(getchar() != '\n');
	getchar();
}


