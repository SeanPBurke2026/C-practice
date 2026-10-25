#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("data.txt", "w+");
    if(fp == NULL){
        printf("file failed to open\n");
        return 1;
    }

    fprintf(fp, "Name: Alice Johnson\nAge: 30 years");

    printf("Data successfully written to data.txt\n");
    fclose(fp);
    return 0;



}