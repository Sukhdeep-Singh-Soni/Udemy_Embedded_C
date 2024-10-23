
#include <stdio.h>

int main()
{
    printf("Hello World");
    printf("    Today is a great day\n"); //escape seq for newline
    printf("Hello World\n");
    printf("Today is a great day\n");
    
    printf("Hello World\r"); //carriage return brings cursor to beginning of current line horizontally
    printf("bye !\n");
    
    printf("David says \"today is a great day\"\n");
    printf("bye\n");
    

    return 0;
}
