#include <stdio.h>
#include <stdlib.h>

struct Student{
    char * name;
    int roll_number;
    float percentage;
};

int main(){

    struct Student sts[3];

    for(int i=0;i<3;i++){
        printf("--- Enter Data for Student %d\n", i+1);
        printf("Enter Student Name: ");
        scanf("%ms", &sts[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &sts[i].roll_number);
        printf("Enter Percentage: ");
        scanf("%f", &sts[i].percentage);
        printf("\n");
    }

    printf("\n--- All Student Records ---\n");
    for(int i=0;i<3;i++){
        printf("Student %d: Name = %s, Roll = %d, Marks = %.02f\n", i+1, sts[i].name, sts[i].roll_number, sts[i].percentage);
        free(sts[i].name);
    }
    return 0;

}