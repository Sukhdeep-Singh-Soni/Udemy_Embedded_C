#include <stdio.h>

// extern int myvar; //will give error as variable has undefined reference
int myvar;
int myscore1 = 800;
void myfun(void);
int main()
{
    myvar = 540;
    int myscore = 900; //local scope to main only
    
    printf("001 myscore = %d\n",myscore);
    
    printf("Hello World\n");
    
    myfun(); //func call

    return 0;
}

void myfun(void) {
    // myscore = 800; //will give error as variable myscore is local to main
    // printf("002 myscore = %d",myscore);
    myscore1 = 800; //global to all functions
    printf("002 myscore = %d",myscore1);
}

