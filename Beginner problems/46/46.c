#include <stdio.h>
#include <stdlib.h>

void max(int * A, int * B){
    if(*A > *B) printf("A is larger (Value: %d)\n", *A);
    else if(*A < *B) printf("B is larger (Value: %d)\n", *B);
    else printf("The values are equal (Value: %d)\n", *A);
}

int main(int argc, char * argv[]){
    if(argc != 3){
        printf("incorrect number of variables\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int * ptrA = &a;
    int * ptrB = &b;

    printf("Variable A holds: %d\n", *ptrA);
    printf("Variable B holds: %d\n", *ptrB);
    max(ptrA, ptrB);
    
    if(ptrA > ptrB) printf("\nAddress of A is higher than address of B\n");
    else printf("\nAddress of A is higher than address of B\n");
    return 0;
}