#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice;
    do{
        printf("--- Menu ---\n1. Greet\n2. Say Goodbye\n3.Exit\nEnter your choice (1-3): ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Hello!\n");
                break;
            case 2:
                printf("Goodbye :(\n");
                break;
            case 3:
                printf("Exiting\n");
                break;
            default:
                printf("Enter a valid choice");
        }
    }while(choice != 3);
    return 0;
}