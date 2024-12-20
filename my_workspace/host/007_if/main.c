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
#if 0 //old_ver1
//	int age;
//	printf("Enter age: ");
//	scanf("%d", &age);
//	if(age < 18) {
//		printf("Sorry! you are not eligible to vote\n");
//	} else {
//		printf("Yes, you are eligible\n");
//	}
//	if(age >= 18) {
//		printf("Yes, you are eligible\n");
//	}
#endif //old_ver1

#if 0 //old_ver2
	float num1, num2;
	printf("Enter 1st number(integer): ");
	if( scanf("%f", &num1) == 0) { //handling input alphabets
		printf("Invalid input!\n");
		wait_for_user_to_exit();
		return 0;
	}
	printf("Enter second number(integer): ");
	if( scanf("%f",&num2) == 0) {
		printf("Invalid input!\n");
		wait_for_user_to_exit();
		return 0;
	}

	int32_t n1, n2;
	n1 = num1;
	n2 = num2;

	if((n1 != num1) || (n2 != num2))
		printf("Warning! comparing only integer part\n");

	if(n1 == n2) {
		printf("both numbers are equal\n");
	} else {
		if(n1 > n2) {
			printf("%d is bigger\n",n1);
		} else {
			printf("%d is bigger\n",n2);
		}
	}
	wait_for_user_to_exit();
	return 0;
#endif //old_ver2

	uint64_t tax, income;

	double tax_income;
	printf("Enter income: ");
	scanf("%lf",&tax_income);

	if(tax_income < 0) {
		printf("Income cannot be negative\n");
		wait_for_user_to_exit();
		return 0;
	}

	income = tax_income; //decimal part truncated, used to handle fractional part
	 	 	 	 	 	 //not required in this program, so discard

	if(income <=  9525) {
		tax = 0;
	} else if((income > 9525) && (income <= 38700)) {
		tax = income * 0.12; //double with int gives double which assigned to int
							//finally gives truncated output
	} else if((income > 38700) && (income <= 82500)) {
		tax = income * 0.22;
	} else if(income > 82500) {
		tax = income * 0.32;
		tax = tax + 1000; //tax += 1000
	} else {
		;//NOP
	}

	printf("Tax to be paid = %lu\n", tax);
	wait_for_user_to_exit();
	return 0;
}


void wait_for_user_to_exit(void) {
	printf("Press enter to exit...");
	while(getchar() != '\n');
	getchar();
}
