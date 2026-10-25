#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c;
    char * d;
    float x,y,prod,end;
    end = 1;
    printf("Enter first operand ");
    scanf("%f",&x);
    while(end){
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &c);
        printf("Enter second operand: ");
        scanf("%f",&y);
        switch(c){
            case '+':
                prod = x+y;
                break;
            case '-':
                prod = x-y;
                break;
            case '*':
                prod = x*y;
                break;
            case '/':
                if(y != 0){
                    prod = x/y;
                }
                else{
                    printf("cannot divide by zero\n");
                    return 0;
                }
                break;
            default:
                printf("invalid operator\n");
                return 0;
        }
        printf("%.02f %c %.02f = %.02f\n", x, c, y, prod);
        while(strcmp(d, "yes") && strcmp(d, "no")){
            printf("Continue? (yes or no) ");
            scanf("%s", d);
        }
        if(!strcmp(d, "yes")){
            x = prod;
        }
        else{
            end = 0;
        }
        *d = '\0';
    }
    return 0;
}