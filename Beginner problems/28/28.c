#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc==1){
        printf("provide a list of numbers");
        return 0;
    }
    int max=atoi(argv[1]), min=atoi(argv[1]);
    printf("Array elements: {%d", min);
    for(int i=2;i<argc;i++){
        int x = atoi(argv[i]);
        printf(", %d", x);
        if(x>max){
            max = x;
        }
        if(x<min){
            min = x;
        }
    }
    printf("}\nMaximum elements: %d\nMinimum element: %d\n", max, min);
    return 0;
}