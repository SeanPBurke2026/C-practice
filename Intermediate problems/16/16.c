#include <stdio.h>
#include <stdlib.h>

typedef union{
    int i;
    float f;
}Data;


int main(int argc, char * argv[]){
    if(argc != 3){
        printf("provide an int and a float\n");
        return 1;
    }

    Data dat;
    dat.i = atoi(argv[1]);
    printf("Memory state (as float): %f\n\n", dat.f);

    dat.f = atof(argv[2]);
    printf("Memory state (as int): %d\n", dat.i);
    return 0;
    
}
