#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){
    if (argc < 2){
        printf("invalid number of arguments\n");
        return 1;
    }

    int len = 0;
    printf("Source:");
    for(int i=1;i<argc;i++){
        len+=strlen(argv[i])+1;
        printf(" %s", argv[i]);
    }
    printf("\n");

    char * destination = malloc(len*sizeof(char));
    if(destination == NULL) return 1;
    
    int j = argc-1;
    int k  = strlen(argv[j])-1;
    for(int i=0;i<len-1;i++){
        if(k == -1){
            destination[i]= ' ';
            j--;
            k=strlen(argv[j])-1;
            continue;
        }
        destination[i] = argv[j][k--];
    }
    destination[len-1] = '\0';
    printf("Destination: %s\n", destination);
    free(destination);
    return 0;
}