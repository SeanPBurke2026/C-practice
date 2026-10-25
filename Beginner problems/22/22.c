#include <stdio.h>
#include <stdlib.h>

int reverse(long long num){
    long long count = num;
    long long newnum = 0;
    do{
        newnum = newnum * 10 + count%10;
        count /= 10;
    }while(count);
    return newnum;
    
}

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("invalid number of arguments");
        return 0;
    }
    long long num = atoi(argv[1]);
    long long newnum = reverse(num);
    if(num == newnum){
        printf("%lli is a palindrome\n", num);
        return 0;
    }
    printf("%lli is not a palindrome\n", num);
    return 0;
}