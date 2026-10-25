#include <stdio.h>
#include <stdlib.h>

int main(){
    char * string;
    int len=0;

    printf("Enter a string: ");
    scanf("%ms", &string);
    while(string[len]){
        len++;
    }
    printf("The length of the string is: %d\n", len);
    free(string);
    return 0;
}