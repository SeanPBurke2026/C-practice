#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc<2){
        printf("provide a list of integers\n");
        return 1;
    }

    int * arr = malloc((argc-1)*sizeof(int));
    for(int i=1;i<argc;i++){
        arr[i-1] = atoi(argv[i]); 
    }

    int * p = arr;
    printf("Value of the first element (arr[0]): %d\n", *p);
    printf("Value of the second element (arr[1] via pointer arithmetic): %d\n", *(p+1));
    printf("Value of the second element (*p after increment): %d\n", *++p);

    free(arr);
    return 0;
}