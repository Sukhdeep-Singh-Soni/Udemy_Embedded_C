#include <stdio.h>

int main()
{
    char fname[30], lname[30];
    printf("Enter your name : ");
    scanf("%s %s",fname,lname);
    printf("Hi, %s %s\n",fname, lname);
    return 0;
}

