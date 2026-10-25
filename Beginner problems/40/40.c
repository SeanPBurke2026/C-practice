#include <stdio.h>
#include <stdlib.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    int id;
    char * name;
    struct Date date_of_joining;
};

int main(){
        
    struct Employee em;

    printf("Enter Employee ID: ");
    scanf("%d", &em.id);
    printf("Enter Employee Name: ");
    scanf("%ms", &em.name);
    printf("Enter Date of Joining (day month year): ");
    scanf("%d %d %d", &em.date_of_joining.day, &em.date_of_joining.month, &em.date_of_joining.year);
    printf("\n");

    printf("--- Employee Record ---\nID: %d\nName: %s\nJoining Date: %d/%d/%d\n", em.id, em.name, em.date_of_joining.day, em.date_of_joining.month, em.date_of_joining.year);
    free(em.name);
}