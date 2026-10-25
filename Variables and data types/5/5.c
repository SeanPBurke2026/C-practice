#include <stdio.h>

int main(){
    int intVar = 10;
    float floatVar = 25.75f;

    printf("Int converted to float: %f\nFloat converted to int: %d\n", (double)intVar, (int)floatVar);
    return 0;
}