#include <stdio.h>

int tvar = 4;

int main() {
    
    // int tvar = 67; //local is given preference over global if same name in both scopes
    {
        int tvar = 67;
    } //after this curly prace the local variable dies so global var exits only now.
    
    printf("tvar = %d\n",tvar);
}
