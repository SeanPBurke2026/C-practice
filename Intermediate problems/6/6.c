#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int * a, int * b){ return *a+*b;}
int subtract(int * a, int * b) {return *a-*b;}

int main(int argc, char * argv[]){

    if(argc!=3){
        printf("provide a valid pair of integers\n");
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("Operation: ADD | Result: %d\n", add(&x,&y));
    printf("Operation: ADD | Result: %d\n", subtract(&x,&y));
    return 0;

}