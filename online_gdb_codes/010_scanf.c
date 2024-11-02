#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter your name : ");
    scanf("%s",name);
    
    printf("Hi, %s\n",name);
    
    for(int i = 0; i < 30; i++) {
        printf("%x ",name[i]);
    }
    printf("\n");

    return 0;
}

