#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("File could not be opened");
        return 1;
    }

    char buff[100];
    while(fgets(buff, sizeof(buff), fp) != NULL){
        printf("%s", buff);
    }

    fclose(fp);
    printf("\n");
    return 0;

}