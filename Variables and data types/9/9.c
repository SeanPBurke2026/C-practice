#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    printf("The area of a circle with radius %.02f is %.02f\n", r, M_PI*r*r);
    return 0;

}