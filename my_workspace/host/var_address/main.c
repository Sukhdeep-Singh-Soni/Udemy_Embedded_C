/*
 * main.c
 *
 *  Created on: Oct 24, 2024
 *      Author: deep
 */

#include <stdio.h>

int a = 6;

int main() {

    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';
    char a8 = 'B';

    unsigned long long int addr_of_a8 = (unsigned long long int)&a8;

    /* %p prints addtess of a variable in hex format*/
    printf("val of a1 = %p\n",&a1);
    printf("val of a2 = %p\n",&a2);
    printf("val of a3 = %p\n",&a3);
    printf("val of a4 = %p\n",&a4);
    printf("val of a5 = %p\n",&a5);
    printf("val of a6 = %p\n",&a6);
    printf("val of a7 = %p\n",&a7);

    //llx for long long int in hex and # is for initial '0x'
    printf("val of a8 = %#llx\n",addr_of_a8);

    return 0;
}
