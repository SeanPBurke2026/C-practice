#include <stdio.h>
#include <stdlib.h>

int main(){

    char * string;
    int numwords = 0, i = 0, newchar = 0;

    printf("The string is: ");
    scanf("%m[^\n]", &string);
    if(string == NULL) return 1;

    while(string[i] != '\0'){
        if(string[i] == ' '){
            newchar = 0;
        }
        else{
            if(newchar == 0){
                numwords++;
                newchar = 1;
            }
        }
        i++;
    }
    printf("Total number of words: %d\n", numwords);
    free(string);
    return 0;
}