/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_to_exit(void);
int main() {

	int8_t code;
	float b, h, r, a;
	float area;
	printf("Area calculation program\n");
	printf("Triangle ->  t\n");
	printf("Trapezoid -> z\n");
	printf("Circle ->    c\n");
	printf("Square ->    s\n");
	printf("Rectangle -> r\n");
	printf("Press the area code: ");
	scanf("%c",&code);

	switch(code) {
	case 't':
		printf("Triangle area calculation\n");
		printf("Enter base value: ");
		scanf("%f",&b);
		printf("Enter height value: ");
		scanf("%f",&h);
		if((b < 0) || (h < 0)) {
			printf("base or height cannot be -ve\n");
			area = -1;
		} else {
			area = (b * h) / 2;
		}
		break;
	case 'z':
		printf("Trapeziod area calculation\n");
		printf("Enter base value: ");
		scanf("%f",&a);
		printf("Enter height value: ");
		scanf("%f",&b);
		printf("Enter height value: ");
		scanf("%f",&h);
		if((b < 0) || (h < 0) || (a < 0)) {
			printf("base or height cannot be -ve\n");
			area = -1;
		} else {
			area = ((a + b) / 2) * h;
		}
		break;
	case 'c':
		printf("Circle area calculation\n");
		printf("Enter Radius value: ");
		scanf("%f",&r);
		if(r < 0) {
			printf("radius cannot be -ve\n");
			area = -1;
		} else {
			area = 3.15 * r * r;
		}
		break;
	case 's':
		printf("Square area calculation\n");
		printf("Enter Side value: ");
		scanf("%f",&a);
		if(a < 0) {
			printf("side cannot be -ve\n");
			area = -1;
		} else {
			area = a * a;
		}
		break;
	case 'r':
		printf("Rectangle area calculation\n");
		printf("Enter base value: ");
		scanf("%f",&b);
		printf("Enter height value: ");
		scanf("%f",&h);
		if((b < 0) || (h < 0)) {
			printf("base or height cannot be -ve\n");
			area = -1;
		} else {
			area = (b * h);
		}
		break;

	default:
		printf("Invalid input\n");
		break;
	}//end of switch body

	if(!(area < 0)) {
		printf("Area = %f\n",area);
		wait_for_user_to_exit();
	} else {
		wait_for_user_to_exit();
		return 0;
	}
}

void wait_for_user_to_exit(void) {
	printf("Press enter to exit...");
	while(getchar() != '\n');
	getchar();
}
