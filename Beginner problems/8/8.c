#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char letter;
    printf("Enter a character: ");
    scanf("%c", &letter);
    printf("The character entered is: %c\n", letter);
    printf("The ASCII value of '%c' is: %d\n", letter, letter);
}