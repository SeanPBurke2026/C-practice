#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 3){
        printf("incorrect number of arguments\n");
        return 0;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}