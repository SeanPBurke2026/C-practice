#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("incorrect number of arguments\n");
        return 0;
    }
    int num = atoi(argv[1]);
    if(num%2){
        printf("%d is an ODD number\n", num);
    }
    else{
        printf("%d is an EVEN number\n", num);
    }
    return 0;
}