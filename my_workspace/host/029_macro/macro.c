/*
 * macro.c
 *
 *  Created on: Nov 2, 2024
 *      Author: deep
 */

#include <stdio.h>

#define PI_VALUE	3.1415f
#define PI_VALUE1	(3.1415f) /*safe to guard*/
#define AREA_OF_CIRCLE(x)	PI_VALUE * x * x /*might produce glitch as in area1 printf*/
#define AREA_OF_CIRCLE2(x)	((PI_VALUE) * (x) * (x)) /*guard values with parenthesis*/
int main() {

	float area, area1, area2;

	area = AREA_OF_CIRCLE(2);
	area1 = AREA_OF_CIRCLE(1+1);
	area2 = AREA_OF_CIRCLE2(1+1);

	printf("area of circle : %f\n",area);
	printf("area of circle : %f\n",area1);
	printf("area of circle : %f\n",area2);

}
