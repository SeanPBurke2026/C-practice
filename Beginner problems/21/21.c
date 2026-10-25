#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("invalid number of arguements\n");
        return 0;
    }

    long long num = atoi(argv[1]);
    long long count = num;
    long long newnum = 0;
    do{
        newnum = newnum * 10 + count%10;
        count /= 10;
    }while(count);
    printf("The reverse of %lli is: %lli\n", num, newnum);
    return 0;
    
}