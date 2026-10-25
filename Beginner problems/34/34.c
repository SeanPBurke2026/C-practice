#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char * argv[]){
    if(argc<2){
        printf("incorrect number of arguements");
        return 1;
    }

    int con=0, vow=0;
    printf("String:");
    for(int i=1;i<argc;i++){
        printf(" %s", argv[i]);
        int j=0;
        while(argv[i][j] != '\0'){
            char ch = tolower(argv[i][j]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vow++;
            }
            else if(96 < ch && ch < 124) {
                con++;
            }
            j++;
        }
    }
    printf("\nTotal Vowels: %d\n", vow);
    printf("Total Consonants: %d\n", con);
}