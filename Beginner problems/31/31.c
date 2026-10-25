#include <stdio.h>
#include <stdlib.h>

int find_max(int * p, int n){
    int max = p[0];
    for(int i=1;i<n;i++){
        if(p[i]>max){
            max = p[i];
        }
    }
    return max;
}

int main(int argc, char * argv[]){
    if(argc==1){
        printf("provide a list of numbers");
        return 0;
    }

    int * p = malloc((argc-1)*sizeof(int));
    printf("Array elements: {");
    for(int i=1;i<argc;i++){
        int x = atoi(argv[i]);
        p[i-1] = x;
        if(i==1){
            printf("%d", x);
            continue;
        }
        printf(", %d", x);
    }
    printf("}\nThe largest element found by the function is: %d\n", find_max(p, argc-1));
    return 0;
}