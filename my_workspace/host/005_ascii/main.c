/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6;
	printf("Enter 6 characters: ");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
	printf("ASCII codes: %u, %u, %u, %u, %u, %u\n", c1, c2, c3, c4, c5, c6);
	printf("Press enter to exit");
	while(getchar() != '\n');
	getchar();
	return 0;
}
