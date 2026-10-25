#include <stdio.h>
#include <stdlib.h>

int * max(int * arr, int size){
    int * max = arr;
    for(int i=0;i<size;i++){
        if(arr[i]>*max) max = &arr[i];
    }
    return max;
}

int main(int argc, char * argv[]){
    if(argc<2){
        printf("provide an array of elements\n");
        return 1;
    }

    int * arr = malloc((argc-1)*sizeof(int));
    int * maxint;

    printf("Searching array: ");
    for(int i=0;i<argc-1;i++){
        arr[i]=atoi(argv[i+1]);
        if(i==0)printf("%d", arr[i]);
        else printf(", %d", arr[i]);
    }
    maxint = max(arr, argc-1);
    printf("\nMax Value: %d found at Index: %ld\n", *maxint, maxint-arr);
    free(arr);
    return 0;


}