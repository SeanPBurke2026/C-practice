#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Takes arg int and prints all natural numbers from 1 to int
//adding arg "forward", "reverse" after int prints all the natural numbers from 1 to int in forward or reverse respectivly
//adding arg "sum" after int prints the sum of all natural numbers from 1 to int
//adding arg "odd" after int prints all the odd natural numbers from 1 to int
//adding arg "mult" and arg int2 after int1 prints the multiplication table for int2 from 1 to int1
int main(int argc, char * argv[]){
    if(argc<2 || argc>4){
        printf("invalid number of arguments");
        return 0;
    }
    int nums = atoi(argv[1]);
    if(argc == 2){
        printf("The first %d natural numbers are:\n", nums);
        for(int i=1;i<=nums;i++){
            printf("%d ", i);
        }
        printf("\n");
        return 0;
    }

    if(argc == 4){
        char * dir = argv[2];
        int mult = atoi(argv[3]);
        if(!strcmp(dir, "mult")){
            printf("Multiplication table for %d:\n", mult);
            for(int i=1;i<=nums;i++){
                printf("%d x %d = %d\n", mult, i, i*mult);
            }
            return 0;
        }
    }

    char * dir = argv[2];
    if(!strcmp(dir, "forward")){
        printf("The first %d natural numbers in increasing order are:\n", nums);
        for(int i=1;i<=nums;i++){
            printf("%d ", i);
        }
        printf("\n");
        return 0;
    }
    else if(!strcmp(dir, "reverse")){
        printf("The first %d natural numbers in decreasing order are:\n", nums);
        while(nums){
            printf("%d ", nums);
            nums--;
        }
        printf("\n");
        return 0;
    }
    else if(!strcmp(dir, "odd")){
        printf("The first %d odd natural numbers are:\n", nums);
        int i = 1;
        do{
            if(i%2){
            printf("%d ", i);
            }
            i++;
        }while(i <=nums);
        printf("\n");
        return 0;
    }    
    else if(!strcmp(dir, "sum")){
        int sum = 0;
        for(int i=1;i<=nums;i++){
            sum += i;
        }
        printf("The sum of the first %d natural numbers is: %d\n", nums, sum);
        return 0;
    }
    printf("enter a valid arguement\n");
    return 0;
    
}