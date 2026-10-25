#include <stdio.h>
#include <stdlib.h>

struct Car{
    int model_year;
    char * color;
};

int main(){
    struct Car c;
    struct Car * c1;
    c1 = &c;

    printf("Enter Car Model Year: ");
    scanf("%d", &c1->model_year);
    printf("Enter Car Color: ");
    scanf("%ms", &c1->color);

    printf("\n--- Car Details (via pointer ---\nModel Year: %d\nColor: %s\n", c1->model_year, c1->color);
    free(c1->color);
    return 0;
}