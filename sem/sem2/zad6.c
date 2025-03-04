#include <stdio.h>

int main(){

    float x1, x2, y1, y2, x, y;

    printf("Enter coordinates of rectangle: ");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    printf("Enter coordinates of point: ");
    scanf("%f%f", &x, &y);

    if(x1 < x2 && y1 < y2){
        if((x>x1 && x<x2) && (y>y1 && y< y2)){
            printf("Inside");
        }
        else{
            printf("Outside");
        }
    }


    return 0;
}