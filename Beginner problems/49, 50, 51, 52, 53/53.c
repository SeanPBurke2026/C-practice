#include <stdio.h>
#include <stdlib.h>

int main(){
    int numlines = 1;
    FILE * fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("file failed to open\n");
        return 1;
    }

    char chr = fgetc(fp);
    while(chr != EOF){
        if(chr == '\n') numlines++;
        chr = fgetc(fp);
    }
    printf("Total number of lines in the file: %d\n", numlines);

    fclose(fp);
    return 0;
}