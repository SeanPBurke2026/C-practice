#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc==1){
        printf("provide a list of numbers");
        return 0;
    }
    int sum=0;
    printf("The elements are:");
    for(int i=1;i<argc;i++){
        int x = atoi(argv[i]);
        if(i==1){
            printf(" %d", x);
            sum+=x;
            continue;
        }
        printf(", %d", x);
        sum+=x;
    }
    printf("\nThe sum of all array elements is: %d\n", sum);
    return 0;
}