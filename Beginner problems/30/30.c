#include <stdio.h>
#include <stdlib.h>

void check_even_odd(int num){
    if(num%2){
        printf("%d is ODD\n", num);
    }
    else{
        printf("%d is EVEN\n", num);
    }
}

int main(int argc, char * argv[]){
    if(argc == 1){
        printf("provide numbers to check");
        return 0;
    }

    printf("Checking numbers...\n");
    for(int i=1;i<argc;i++){
        check_even_odd(atoi(argv[i]));
    }
    return 0;
}