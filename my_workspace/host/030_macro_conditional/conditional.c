/*
 * conditional.c
 *
 *  Created on: Nov 2, 2024
 *      Author: deep
 */
#include <stdio.h>

#define PI_VALUE	(3.1415f) /*safe to guard*/
#define AREA_OF_CIRCLE(x)	((PI_VALUE) * (x) * (x)) /*guard values with parenthesis*/
#define AREA_OF_TRIANGLE(b,h)	(((b) * (h)) / 2)
#define AREA_CIRCLE
#define AREA_TRIANGLE

//#undef AREA_TRIANGLE /*undefune a macro without commenting or removing the macro*/

#if !defined(AREA_CIRCLE) && !defined(AREA_TRIANGLE)
	#error "No macros defined" /*wll give error if both macros are not defined and its not a executable statement so can be put anyehere outside/inside main*/
#endif

int main() {

	float area;
/*#if contitions*/
#if 0
	area = AREA_OF_CIRCLE(2);
	printf("area of circle : %f\n",area);
#endif

/*# if with #else*/
#if 1
	area = AREA_OF_CIRCLE(2);
	printf("area of circle : %f\n",area);
#else
	area = AREA_OF_TRIANGLE(b,h);
	printf("area of circle : %f\n",area);
#endif

/*#ifdef , can use it with # else also*/
#ifdef AREA_CIRCLE

#else
	//not compiled
#endif

/*#ifndef condition*/
#ifndef AREA_CIRCLE
	//not compiled
#else

#endif

#ifdef AREA_TRIANGLE
	#ifdef AREA_CIRCLE
		printf("will work only if both macros are defined, can use alternative method also like defined operator\n");
	#endif
#endif

#if defined(AREA_CIRCLE) && defined(AREA_TRIANGLE)
		printf("Usage of defined operator with logical operator\n");
#endif
}


