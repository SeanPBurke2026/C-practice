#include <stdio.h>
#include <stdlib.h>

void square_value(int * val){
    *val = *val * *val;
}

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("incorrect number of variables\n");
        return 1;
    }

    int x = atoi(argv[1]);
    printf("Original value of x: %d\n", x);
    square_value(&x);
    printf("Value of x after function call: %d\n", x);

}