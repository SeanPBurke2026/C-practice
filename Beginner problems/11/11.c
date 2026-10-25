#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("incorrect number of arguments\n");
        return 0;
    }
    int year;
    year = atoi(argv[1]);
    if(year%400 && (year%4 || !(year%100))){
        printf("%d is not a LEAP YEAR\n", year);
    }
    else{
        printf("%d is a LEAP YEAR\n", year);
    }
    return 0;
}