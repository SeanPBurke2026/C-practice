#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Point;

typedef struct{
    Point mid;
    float r;
}Circle;

float area(Circle a){
    return M_PI*(a.r*a.r);
}

int main(int argc, char * argv[]){
    if(argc != 4){
        printf("provide the coordinates of the circles center and it's radius (x, y, r)\n");
        return 1;
    }

    Point center;
    center.x = atof(argv[1]);
    center.y = atof(argv[2]);

    Circle circ;
    circ.mid = center;
    circ.r = atof(argv[3]);

    printf("Circle Center: (%.01f, %.01f)\nCircle Radius: %.01f\nCalculated Area: %.02f\n", circ.mid.x, circ.mid.y, circ.r, area(circ));
    return 0;

}