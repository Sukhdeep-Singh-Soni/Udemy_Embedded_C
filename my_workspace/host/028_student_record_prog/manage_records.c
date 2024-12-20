/*
 * manage_records.c
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

STUDENT_INFO_t students[10];

uint32_t const max_records = 10;

void display_all_records(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit);
void add_new_record(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit);
void delete_a_record(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit);

int main() {

	uint8_t option = 0;

	while(1) {
		option = 0;
		printf("Student record management program\n");
		printf("Display all records		-->1\n");
		printf("Add new record			-->2\n");
		printf("Delete a record			-->3\n");
		printf("Exit Application		-->4\n");
		printf("Enter your option here : ");
		scanf("%c", &option);

		switch(option) {
		case '1':
			display_all_records(students, max_records);
			break;
		case '2':
			//add a new record
			add_new_record(students, max_records);
			break;
		case '3':
			//delete a record
			delete_a_record(students, max_records);
			break;
		case '4':
			//exit application
			printf("Exiting application\n");
			return 0;
			break;
		default:
			printf("Invalid option!\n");
		}//end of switch case
	}//end of while loop
}

void add_new_record(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit) {

	int roll_num;
	uint8_t bkp = 11, error_flag = 0, set_flag = 0;
	/*took bkp = 11 just for differentiating it with other array index numbers and for the logic used
	 * as checking the changed value of index update*/
	printf("Enter the roll number for new student : ");
	scanf("%d",&roll_num);

	for(uint32_t i = 0; i < record_limit; i++) {
		if(pBaseAddr[i].rollnumber != 0) {
			if(roll_num == pBaseAddr[i].rollnumber) {
				printf("Record already exist\n");
				error_flag = 1;
				break;
			}
		} else {
			if(set_flag == 0) {
				bkp = i;
				set_flag = 1;
			}
		}
	}


	if(bkp != 11 && error_flag != 1) {
		pBaseAddr[bkp].rollnumber = roll_num;
		printf("Enter Student semister : ");
		scanf("%d",&((pBaseAddr+bkp)->semister));
		getchar(); /*for removing the \n character after entering the semister value*/
		printf("Enter Student name : ");
		scanf("%[^\n]s",(pBaseAddr+bkp)->name);
		getchar();
		printf("Enter Student branch : ");
		scanf("%[^\n]s",(pBaseAddr+bkp)->branch);
		getchar();
		printf("Enter Student date of birth : ");
		scanf("%s",(pBaseAddr+bkp)->dob);
		printf("Record added successfully\n");
	} else if(bkp == 11 && error_flag != 1) {
		printf("No space to add new record\n");
	}
	getchar(); /*to remove \n from input buffer*/
}

void delete_a_record(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit) {

	int roll_num = 0;
	uint8_t found = 0;

	printf("Enter student roll numeber : ");
	scanf("%d",&roll_num);

	for(uint32_t i = 0; i < record_limit; i++)   {
		if(pBaseAddr[i].rollnumber == roll_num) {
			found = 1;
			//zero out the elements of the corresponding structure
			pBaseAddr[i].rollnumber = 0;
			pBaseAddr[i].semister = 0;
			pBaseAddr[i].name[0] = '\0';
			pBaseAddr[i].branch[0] = '\0';
			pBaseAddr[i].dob[0] = '\0';
			printf("Record deleted successfully\n");
		}
	}

	if(found != 1) {
		printf("No Records Match\n");
	}

	getchar();
}

void display_all_records(STUDENT_INFO_t *pBaseAddr, uint32_t const record_limit) {

	uint32_t record_cnt = 0;

	for(uint32_t i = 0; i < record_limit; i++) {
		if(pBaseAddr[i].rollnumber != 0) {
			record_cnt++;
			printf("RollNumber of   %d element student is     : %d\n", i, (pBaseAddr + i)->rollnumber);
			printf("Name       of   %d element student is     : %s\n", i, (pBaseAddr + i)->name);
			printf("Branch     of   %d element student is     : %s\n", i, (pBaseAddr + i)->branch);
			printf("DOB 	   of   %d element student is     : %s\n", i, (pBaseAddr + i)->dob);
			printf("Semester   of   %d element student is     : %d\n", i, pBaseAddr[i].semister);
		}
	}

	if(record_cnt == 0) {
		printf("No records found\n");
	}
	getchar(); /*to remove \n from input buffer*/
}

