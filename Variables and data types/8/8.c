#include <stdio.h>
#include <stdlib.h>

int main(){

    int age;
    char * name;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter name: ");
    scanf("%ms", &name);

    printf("You are %d years old and your name is '%s'.\n", age, name);
    free(name);
    return 0;
}