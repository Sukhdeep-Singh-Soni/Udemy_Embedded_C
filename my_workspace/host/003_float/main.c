/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {

	float a = 45.34567898712;
	printf("%0.9f\n",a); //precision loss
	double b = 45.34567898712;
	double c = 34.56e-19;
	printf("%0.14lf\n",b);
	printf("%.2le\n",b);
	printf("%0.2le\n",c);


}
