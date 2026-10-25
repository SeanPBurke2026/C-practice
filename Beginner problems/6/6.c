#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
    if(argc != 3){
        printf("Incorrect number of inputs");
        return 0;
    }
    int A,B,temp;
    A = atoi(argv[1]);
    B = atoi(argv[2]);
    printf("\n--- Before Swap ---\nA = %d, B = %d\n", A, B);
    temp = A;
    A = B;
    B = temp;
    printf("\n--- After Swap ---\nA = %d, B = %d\n", A, B);
}