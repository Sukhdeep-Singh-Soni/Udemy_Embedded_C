#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter your name : ");
    // scanf("%[^s]s",name); /*scanf will scan until the first occurance of character 's' wihtout ignoring whitespace chars*/
    scanf("%[^\n]s",name); /*will scan without ignoring whitespace characters until the first occurance of \n char*/
    printf("Hi, %s\n",name);
    return 0;
}

