#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
    if(argc != 4){
        printf("Incorrect number of inputs\n");
        return 0;
    }
    float principal, rate, time;
    principal = atof(argv[1]);
    rate = atof(argv[2]);
    time = atof(argv[3]);
    printf("Simple Interest is: %.02f\n", (principal*rate*time)/100);
    return 0;
}