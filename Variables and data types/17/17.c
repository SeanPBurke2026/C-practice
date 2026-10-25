#include <stdio.h>

int main(){
    {
        int x = 100;
        {
            int x = 5000;
            printf("x inner scope: %d\n\n", x);
        }
        printf("x outer scope: %d\n\n", x);
    }
    return 0;
}