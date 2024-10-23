#include <stdio.h>

int main()
{

    long long int mylongvar = 9000;
    char size = sizeof(mylongvar);
    
    printf("sizeof char  = %ld\n",sizeof(char));
    printf("sizeof short  = %ld\n",sizeof(short));
    printf("sizeof int  = %ld\n",sizeof(int));
    printf("sizeof long  = %ld\n",sizeof(long));
    printf("sizeof long long  = %ld\n",sizeof(long long));
    printf("sizeof long long var  = %ld\n",sizeof(mylongvar));
    printf("sizeof long long var assigned  = %d\n",size);
return 0;
}
