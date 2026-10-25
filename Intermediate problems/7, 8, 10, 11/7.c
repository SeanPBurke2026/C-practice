#include <stdio.h>
#include <string.h>

int my_strlen(char * s){
    char * p = s;
    while(*p)p++;
    return p-s;

}

void rvrse_str(char * s){
    int len = strlen(s)-1;
    int j = len/2;
    for(int i=0;i<j;i++){
        char temp = s[i];
        s[i]=s[len];
        s[len--]=temp;
    }
}

int is_palindrome(char * s){
    int len = strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-1-i]) return 0;
    }
    return 1;
}

int num_words(char * s){
    int len = strlen(s), words = 1;
    for(int i=0;i<len;i++){
        if(s[i] == ' ') words++;
    }
    return words;
}

int main(int argc, char * argv[]){
    if(argc < 2){
        printf("Provide a valid string\n");
        return 1;
    }
    char inpt_str[10000];
    int totlen=0;
    for(int i = 1; i<argc;i++){
        int len = my_strlen(argv[i]);
        for(int j=0;j<len;j++){
            inpt_str[totlen++]=argv[i][j];
        }
        inpt_str[totlen++]=' ';
    }
    inpt_str[totlen-1]=0;

    printf("String: %s\n", inpt_str);
    printf("Calculated Length: %d\n", my_strlen(inpt_str));

    printf("Result: ");
    if(is_palindrome(inpt_str)) printf("Is a palindrome\n");
    else printf("Is not a palindrome\n");

    printf("Word Count: %d\n", num_words(inpt_str));

    rvrse_str(inpt_str);
    printf("Reversed String: %s\n", inpt_str);
    return 0;


}