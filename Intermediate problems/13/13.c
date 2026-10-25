#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float real;
    float imaginary;
}complex_num;

complex_num cmp_add(complex_num a, complex_num b){
    complex_num sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

int main(int argc, char *argv[]){
    if(argc != 5){
        printf("provide 4 numbers\n");
        return 1;
    }

    complex_num a, b;
    a.real = atof(argv[1]);
    a.imaginary = atof(argv[2]);
    b.real = atof(argv[3]);
    b.imaginary = atof(argv[4]);
    complex_num sum = cmp_add(a,b);
    printf("Adding: (%.01f + %.01fi) and (%.01f + %.01fi)\nResult: %.01f + %.01fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);

}