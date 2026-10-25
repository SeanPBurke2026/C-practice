#include <stdio.h>
#include <stdlib.h>

long long calcFact(long long n){
    if(n<0){
        printf("N cannot be less than 0\n");
        return 0;
    }
    if(n == 0){
        return 1;
    }
    return n * calcFact(n-1);
}

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("invalid number of arguments");
        return 0;
    }
    long long fact, n;
    n = atoi(argv[1]);
    fact = calcFact(n);
    if(!fact){
        return 0;
    }
    printf("The factorial of %lli is: %lli\n", n, fact);
    return 0;

}