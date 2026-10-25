#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b){
    return (strlen(*(char **)a)-strlen(*(char **)b));
}

int main(int argc, char * argv[]){
    if(argc <2){
        printf("provide a valid list of strings\n");
        return 1;
    }

    for(int i=1;i<argc;i++){
        printf("%s ", argv[i]);
    }
    printf("\n");

    qsort(&argv[1], argc-1, sizeof(char *), compare);
    
    for(int i=1;i<argc;i++){
        printf("%s ", argv[i]);
    }
    printf("\nShortest: %s, Longest: %s\n", argv[1], argv[argc-1]);
    return 0;

}