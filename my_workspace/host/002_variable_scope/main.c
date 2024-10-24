/*
 * main.c
 *
 *  Created on: Oct 24, 2024
 *      Author: deep
 */

#include <stdio.h>

int a = 6;

int main() {

    int a = 25;

    {
        int myvar = 50;
        printf("001a = %d\n",a);
        printf("001myvar = %d\n",myvar);
    }

    int myvar;

    myvar  = myvar + 10;

    printf("002myvar = %d\n",myvar);

    return 0;
}
