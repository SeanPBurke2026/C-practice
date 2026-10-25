#include <stdio.h>

void main(){
    float n;
    printf("Enter a floating-point number (e.g., 3.14159): ");
    scanf("%f", &n);
    printf("The number rounded to two decimal places is: %.02f\n", n);

}