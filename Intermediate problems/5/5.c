#include <stdio.h>
#include <stdlib.h>

int main(){
    int cap = 2;
    int * arr = malloc(cap*sizeof(int));
    printf("Initial Capacity: %d\n", cap);
    int j =0;
    while(j<5){
        if(j>=cap){
            cap*=2;
            printf("..Capacity doubled to %d..\n", cap);
        }
        scanf("%d", &arr[j++]);
    }

    printf("Final Data:");
    for(int i=0;i<5;i++){
        printf(" %d", arr[i]);
    }
    printf("\nFinal Capacity: %d\n", cap);
    return 0;
}