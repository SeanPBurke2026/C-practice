#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc < 2){
        printf("please provide a list of numbers\n");
        return 1;
    }

    int * source_arr = malloc((argc-1)*sizeof(int));
    int * dest_arr = malloc((argc -1)*sizeof(int));

    printf("Source array elements: ");
    for(int i=1;i<argc;i++){
        source_arr[i-1] = atoi(argv[i]);
        printf(" %d", source_arr[i-1]);
    }
    printf("\n");

    printf("Destination array elements (after copy): ");
    for(int i=0;i<argc-1;i++){
        dest_arr[i] = source_arr[i];
        printf(" %d", dest_arr[i]);
    }
    printf("\n");

    free(source_arr);
    free(dest_arr);
    return 0;
}