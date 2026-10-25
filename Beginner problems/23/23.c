#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 3){
        printf("invalid number of arguements\n");
        return 0;
    }
    int from = atoi(argv[1]), to = atoi(argv[2]);
    printf("Odd numbers from %d to %d:\n", from, to);
    for(from;from<=to;from++){
        if(!(from%2)){
            continue;
        }
        printf("%d ", from);
    }
    printf("\n");
    return 0;
}