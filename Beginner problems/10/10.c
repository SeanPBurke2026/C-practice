#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("wrong number of arguments");
        return 0;
    }
    int A,B,C,max;
    char c;
    A = atoi(argv[1]);
    B = atoi(argv[2]);
    C = atoi(argv[3]);
    if(A >= B && A >= C){
        max = A;
        c = 'A';
    }
    else if(B>=C){
        max = B;
        c = 'B';
    }
    else{
        max = C;
        c = 'C';
    }
    printf("%c (%d) is the largest number\n", c, max);
    return 0;

}