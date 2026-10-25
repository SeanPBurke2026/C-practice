#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { char name[20]; int age; }Student;

int main(int argc, char * argv[]){

    if((argc-1)%2){
        printf("provide up to 10 name age inputs [char name[20] int age]");
        return 1;
    }

    Student sts[10];
    
    printf("--- Existing Data in Memory ---\n");
    for(int i=1, j=0;i<argc && j<10;i+=2,j++){
        strcpy(sts[j].name, argv[i]);
        sts[j].age = atoi(argv[i+1]);
        printf("%s, %d\n",sts[j].name, sts[j].age);
    }
    
    FILE * fp = fopen("students.bin", "wb+");
    if(fp == NULL){
        printf("file failed to open");
        return 1;
    }

    Student sts2[10];
    fwrite(sts, sizeof(Student), 10, fp);
    printf("\nData written successfully in binary file\n\n");
    rewind(fp);
    fread(sts2, sizeof(Student), 10, fp);
    
    printf("--- Existing Data in Memory ---\n");
    for(int i=0;i<argc/2;i++){
        printf("%s, %d\n",sts2[i].name, sts2[i].age);
    }

    fclose(fp);

    return 0;

}
