#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("invalid number of arguments");
        return 0;
    }

    int n = atoi(argv[1]);
    int * arr = malloc(n*sizeof(int));
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);

    }
    printf("Elements stored in the array:");
    for(int i=0;i<n;i++){
        printf(" %d", arr[i]);
    }
    free(arr);
    printf("\n");
    return 0;
}