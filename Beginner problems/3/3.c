#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a,b;
    if(argc != 3){
        printf("wrong number of arguments\n");
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("Sum: %d + %d = %d\n", a, b, a+b);
    printf("Difference: %d + %d = %d\n", a, b, a-b);
    printf("Product: %d + %d = %d\n", a, b, a*b);
    if(b != 0){
        printf("Quotient: %d + %d = %.02f\n", a, b, (float)a/b);
    }
    else{
        printf("cannot divide by zero");
    }

}