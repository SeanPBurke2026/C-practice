#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fr = fopen("source.txt", "r");
    FILE * fw = fopen("destination.txt", "w");
    if(fr == NULL || fw == NULL){
        printf("files failed to open properly");
        return 1;
    }

    char current;
    int tot =1;
    while((current = fgetc(fr)) != EOF){
        fputc(current, fw);
        if(current == '\n') tot+=1;
    }

    fclose(fr);
    fclose(fw);

    printf("Total lines: %d\n", tot);

    return 0;
}