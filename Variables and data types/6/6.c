#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    int tmp = a;
    a=b;
    b=tmp;
    printf("After swap: a = %d, b = %d\n", a, b);
}