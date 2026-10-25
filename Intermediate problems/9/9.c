#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_anagram(char * A, char * B){

    int len = strlen(A);
    if(len != strlen(B)) return 0;
        
    int hash[128] = {0};
    for(int i=0;i<len;i++){
        hash[A[i]]++;
        hash[B[i]]--;
    }

    for(int i=0;i<128;i++){
        if(hash[i]!=0){
            return 0;
        }
    }
    return 1;

}


int main(int argc, char * argv[]){
    if(argc != 3){
        printf("provide a pair of strings\n");
        return 1;
    }

    printf("String A: %s | String B: %s\n", argv[1], argv[2]);

    if(is_anagram(argv[1], argv[2])) printf("Result: Anagrams Found\n");
    else printf("Result: Anagrams not Found\n");
    return 0;
    

}