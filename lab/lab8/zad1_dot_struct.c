#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordinates{
    int x;
    int y;
};

typedef struct Coordinates point;

int main(){
    point coord[3];

    for(int i = 0; i < 3; i++){
        printf("Enter coordinates of %d point\n", i+1);
        scanf("%d %d", &coord[i].x, &coord[i].y);
    }

    for(int i = 0; i < 3; i++){
            printf("printf coordinates: x=%d, y=%d\n", coord[i].x, coord[i].y);
    }


    double a = sqrt(pow((coord[1].x - coord[0].x), 2) + pow((coord[1].y - coord[0].y), 2));

    double b = sqrt(pow((coord[2].x - coord[0].x), 2) + pow((coord[2].y - coord[0].y), 2));

    double c = sqrt(pow((coord[2].x - coord[1].x), 2) + pow((coord[2].y - coord[1].y), 2));

    printf("Wall a: %.2lf\nWall b: %.2lf\nWall c: %.2lf\n", a, b, c);
    

    return 0;
}
