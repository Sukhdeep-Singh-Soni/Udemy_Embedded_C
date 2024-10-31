/*
 * while.c
 *
 *  Created on: Oct 31, 2024
 *      Author: deep
 */

#include <stdio.h>

void wait_for_user_to_exit(void);

int main() {

	int i;

	i = 1;

	while(i <= 10) {
		printf("%d\n", i++);
	}

	wait_for_user_to_exit();
	return 0;

}

void wait_for_user_to_exit(void) {
	printf("Press enter to exit...");
	while(getchar() != '\n');
	getchar();
}
