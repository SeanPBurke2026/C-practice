#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc != 2){
        printf("invalid number of arguments\n");
        return 0;
    }
    int n = atoi(argv[1]), tot = 0, x = 0, y;
    if(n<1){
        printf("N cannot be less than 1\n");
        return 0;
    }
    printf("Fibonacci Series up to %d terms\n", n);
    for(int i= 0;i<n;i++){
        if(i == 0){
            printf("%d", tot);
        }
        else if(i == 1){
            tot = 1;
            printf(", %d", tot);
        }
        else{
            y = tot;
            tot +=x;
            x = y;
            printf(", %d", tot);
        }
    }
    printf("\n");
    return 0;
}