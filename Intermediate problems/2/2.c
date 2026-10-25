#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("incorrect number of arguements\n");
        return 1;
    }

    int N = atoi(argv[1]);
    int * arr = malloc(N*sizeof(N));
    if(arr == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Array allocated at Heap Address: %p\n", arr);    
    for(int i=0;i<N;i++){
        arr[i] = (i+1)*100;
        printf("Value at index %d: %d\n", i, arr[i]);
    }
    free(arr);
    printf("Memory successfully freed.\n");
    return 0;

}