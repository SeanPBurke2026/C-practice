#include <stdio.h>

int main(){

    printf("Size of int: %zu bytes\nSize of float: %ld bytes\nSize of double: %ld bytes\nSize of char: %ld bytes\nSize of long double: %ld bytes\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char), sizeof(long double));
    return 0;
}