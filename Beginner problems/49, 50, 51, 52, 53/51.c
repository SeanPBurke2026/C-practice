#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char * data;
    printf("Enter data to append\n");
    scanf("%m[^\n]", &data);

    FILE * fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("file could not be opened\n");
        return 1;
    }

    fprintf(fp, "\n%s", data);
    fclose(fp);
    printf("succesfully appended\n");
    return 0;
}