/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: deep
 */
#include <stdio.h>
long long int g_data = 0x00004434678921ff;
int main() {

//	char* ptr = (char *)0x0000ffff76548392; //initialization and declat=ration

//	char data = 100;
//	printf("address of data = %p\n",&data);
//	char* pdata = &data;
//	char value = *pdata;
//	printf("value = %d\n",value);
//	*pdata = 65;
//	printf("data changed via pointer = %d\n",data);

//	char *pdata1 = (char *)&g_data; /*explicit casting is unnecessary as
//										both have 8 bytes memory space
//										reserved by compiler but to remove
//										compiler warning it is used*/
//	printf("value from address %p is : %hhx\n",pdata1, *pdata1);
//
//	short *pdata2 = (short *)&g_data; /*explicit casting is unnecessary as
//										both have 8 bytes memory space
//										reserved by compiler but to remove
//										compiler warning it is used*/
//	printf("value from address %p is : %hx\n",pdata2, *pdata2);
//
//	int *pdata3 = (int *)&g_data; /*explicit casting is unnecessary as
//										both have 8 bytes memory space
//										reserved by compiler but to remove
//										compiler warning it is used*/
//	printf("value from address %p is : %x\n",pdata3, *pdata3);
//
//	long long *pdata4= (long long *)&g_data; /*explicit casting is unnecessary as
//										both have 8 bytes memory space
//										reserved by compiler but to remove
//										compiler warning it is used*/
//	printf("value from address %p is : %llx\n",pdata4, *pdata4);

	char *pdata1 = (char *)&g_data;
	printf("value from address %p is : %hhx\n",pdata1, *pdata1);
	pdata1 = pdata1 + 1;
	printf("value from address %p is : %hhx\n",pdata1, *pdata1);

	short *pdata2 = (short *)&g_data;
	printf("value from address %p is : %hx\n",pdata2, *pdata2);
	pdata2 = pdata2 + 1;
	printf("value from address %p is : %hx\n",pdata2, *pdata2);

	int *pdata3 = (int *)&g_data;
	printf("value from address %p is : %x\n",pdata3, *pdata3);
	pdata3 = pdata3 + 1;
	printf("value from address %p is : %x\n",pdata3, *pdata3);


}

