#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
}Time;

int tot_seconds(Time x){
    int total = x.hours*60*60;
    total += x.minutes*60;
    total += x.seconds;
    return total;
}

int dif_seconds(Time a, Time b){
    return abs(tot_seconds(a)-tot_seconds(b));
}

int main(int argc, char * argv[]){
    if(argc != 7){
        printf("provide two times (hrs min sec)\n");
        return 1;
    }

    Time A, B;
    A.hours = atoi(argv[1]);
    A.minutes = atoi(argv[2]);
    A.seconds = atoi(argv[3]);

    B.hours = atoi(argv[4]);
    B.minutes = atoi(argv[5]);
    B.seconds = atoi(argv[6]);

    printf("Time 1: %02d:%02d:%02d (%d)\n", A.hours, A.minutes, A.seconds, tot_seconds(A));
    printf("Time 2: %02d:%02d:%02d (%d)\n", B.hours, B.minutes, B.seconds, tot_seconds(B));
    printf("Difference: %d seconds\n", dif_seconds(A,B));
}