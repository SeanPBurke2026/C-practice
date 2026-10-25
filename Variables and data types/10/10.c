#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y,z;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("The average is: %.02f\n", ((float)x+y+z)/3);
    return 0;

}