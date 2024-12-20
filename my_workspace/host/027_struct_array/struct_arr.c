/*
 * struct_arr.c
 *
 *  Created on: Nov 2, 2024
 *      Author: deep
 */
#include <stdio.h>
#include <stdint.h>

typedef struct {
	int  rollnumber;
	char name[50];
	char branch[50];
	char dob[15];
	int  semister;
}STUDENT_INFO_t;

STUDENT_INFO_t students[2] = {
		{1789, "ashok kumar", "civil", "12/12/1990", 5} ,
		{1790, "vinay kumar", "computer", "4/3/1989", 3}
};

uint32_t const max_records = 2;

void display_records(STUDENT_INFO_t *pBaseAddr, uint32_t const num);

int main() {


	display_records(students, max_records);

}

void display_records(STUDENT_INFO_t *pBaseAddr, uint32_t const maxrecords) {

	/*//for large structure arrays this method will be lengthy
	printf("roll number of 0th element of structure array is : %d\n", pBaseAddr->rollnumber);
	pBaseAddr++;
	printf("roll number of 1st element of structure array is : %d\n", pBaseAddr->rollnumber);
	*/

	for(uint32_t i = 0; i < maxrecords; i++) {
		printf("roll number of %d element struct arr is %d\n", i, (pBaseAddr + i)->rollnumber);
		printf("semister of %d element of struct arr is %d\n", i, pBaseAddr[i].semister);
		/* pBaseAddr[i].semister ==> (*(pBaseAddr + i))->semister*/
	}
}

