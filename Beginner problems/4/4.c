#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("incorrect number of arguments");
        return 0;
    }
    float r = atof(argv[1]);
    printf("Area of the circle: %.03f\n", M_PI*r*r);
    printf("Circumfrence of the circle: %.03f\n", 2*M_PI*r);
    return 0;
}