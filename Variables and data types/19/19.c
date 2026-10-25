#include <stdio.h>

int main(){
    char x,y;
    printf("Enter two characters: ");
    scanf("%c %c",&x,&y);
    printf("%c + %c = %d\n", x, y, x+y);
    return 0;
}