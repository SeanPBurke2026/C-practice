#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc==1){
        printf("provide a list of numbers");
        return 0;
    }
    int searchval, notfound=1;
    printf("Enter the element to search: ");
    scanf("%d", &searchval);
    for(int i=1;i<argc;i++){
        int x = atoi(argv[i]);
        if(x == searchval){
            printf("Element %d found at index %d\n", searchval, i-1);
            notfound = 0;
        }
    }
    if(notfound){
        printf("Element %d not found in the array\n", searchval);
    }
    return 0;
}