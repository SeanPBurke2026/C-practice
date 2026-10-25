#include <stdio.h>

void main(){
    int sum,x,y;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);
    sum = x+y;
    printf("the sum of %d and %d is: %d\n",x,y,sum);
}