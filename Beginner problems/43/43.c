#include <stdio.h>

int main(){
    int data = 100;
    int * dataptr = &data;
    printf("Initial value of data: %d\n", data);
    *dataptr = 250;
    printf("New value of data: %d\n", data);
}