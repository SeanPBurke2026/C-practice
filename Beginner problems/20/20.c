#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("invalid number of arguments");
        return 0;
    }

    long long num = atoi(argv[1]);
    long long div = num;
    int digits = 0;

    do{
        div /= 10;
        digits++;
    }while(div);
    
    printf("The number %lli has %d digits.\n", num, digits);
    return 0;
}