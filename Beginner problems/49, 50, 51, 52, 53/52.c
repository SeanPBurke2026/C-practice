#include <stdio.h>
#include <stdlib.h>

int main(){
    int numchars = 0;
    FILE * fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("file failed to open\n");
        return 1;
    }

    while(fgetc(fp) != -1){
        numchars++;
    }
    printf("Total number of characters in the file: %d\n", numchars);

    fclose(fp);
    return 0;

}