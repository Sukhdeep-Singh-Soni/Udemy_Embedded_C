#include <stdio.h>

// int my_private_var; //not private to file visible to while program multiple files
static int my_private_var;

void ext_func(void);
int main() {

    my_private_var = 100;
    
    printf("001 my_private_var = %d\n",my_private_var);
    
    ext_func();
    
    printf("002 my_private_var = %d\n",my_private_var);
    
    return 0;
}

static void change_sysclk(int sysclk) { //private to main.c not accessable to other
    printf("sysclk changed to %d\n",sysclk);//functions.
}

