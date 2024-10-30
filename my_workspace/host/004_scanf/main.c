/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {

/*old ver*/
//	float num1, num2, num3;
//	float average;
/*^ old ver*/
	double num1, num2, num3;
	double average; //more precision
	/*old ver*/
//	printf("Enter 1st number: ");
//	fflush(stdout);
//	scanf("%f",&num1);
//	printf("\nEnter 2nd number: ");
//	fflush(stdout);
//	scanf("%f",&num2);
//	printf("\nEnter 3rd number: ");
//	fflush(stdout);
//	scanf("%f",&num3);
/*^ old ver*/
	printf("Enter 3 numbers: ");
	scanf("%lf %lf %lf",&num1, &num2, &num3);
	average = (num1 + num2 + num3) / 3;
	printf("\nAverage: %.3lf",average);
	double charge, chargeE;
	double electrons;
	printf("Enter the charge: ");
	scanf("%lf",&charge);
	printf("Enter the charge of electron: ");
	scanf("%le",&chargeE);
	electrons = (charge / chargeE);
	printf("number of electrons: %le\n",electrons);
	printf("number of electrons: %lf\n", electrons);
	printf("\nPress enter to exit");
	while(getchar() != '\n') {

	}
	getchar();

	return 0;
}
