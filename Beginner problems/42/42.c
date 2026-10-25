#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 42;
    int * varptr = &var;
    printf("value of num: %d\n", var);
    printf("Address of num (&num): %p\n", &var);
    printf("Value stored in ptr (address): %p\n", varptr);
    printf("Value retrieved by *ptr: %d\n", *varptr);

    return 0;

}