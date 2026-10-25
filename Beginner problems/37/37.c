#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int * charfreq = calloc(128, sizeof(int));
    char * string;
    printf("Enter a string: ");
    scanf("%m[^\n]", &string);
    printf("Character Frequencies:\n");
    for(int i=0;i<strlen(string);i++){
        charfreq[tolower(string[i])]++;
    }
    for(int i=0;i<128;i++){
        if(charfreq[i] != 0){
            printf("%c: %d\n", i, charfreq[i]);
        }
    }
    free(charfreq);
    free(string);
    return 0;
}