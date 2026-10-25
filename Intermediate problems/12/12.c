#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * name;
    int roll_number;
    float GPA;
}Student;

Student best_gpa(Student * s, int n){
    Student best = s[0];
    for(int i=1;i<n;i++){
        if(best.GPA < s[i].GPA) best = s[i];
        
    }
    return best;
}

int main(){

    //Test input: Sean 12 2.54 1 Bob 13 1.22 1 Jenny 14 4.0 1 Jim 15 3.2 0

    int n = 0, cnt = 1;
    Student stds[10];
    while(cnt && n!=10){
        printf("Enter student name: ");
        scanf("%ms", &(stds[n].name));
        printf("Enter student roll number: ");
        scanf("%d", &stds[n].roll_number);
        printf("Enter student GPA: ");
        scanf("%f", &stds[n].GPA);
        
        n++;
        
        printf("Continue? yes-1 no- 0: ");
        scanf("%d", &cnt);

        if(n==10) printf("Max number of students reached\n");
    }

    Student best = best_gpa(stds, n);
    printf("Top Student: %s with GPA: %.01f\n", best.name, best.GPA);
    for(int i=0;i<n;i++){
        free(stds[i].name);
    }
    return 0;

}