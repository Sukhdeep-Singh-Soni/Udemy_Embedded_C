/*
 * number_pyramid.c
 *
 *  Created on: Oct 31, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {

	int h;
	printf("Enter height of pyramid : ");
	scanf("%d", &h);

	for(int i = 1; i <= h; i++) {
		for(int j = i; j > 0; j--	) {
			printf("%2d\t", i);
		}
		printf("\n");
	}
}
