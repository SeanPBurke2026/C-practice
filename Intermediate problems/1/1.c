#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Incorrect number of arguments\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Before Swap: x = %d, y = %d\n", a ,b);

    swap(&a, &b);
    printf("After Swap:  x = %d, y = %d\n", a, b);
    return 0;
}