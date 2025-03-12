#include <stdio.h>

float areaOfSquare(float);
float areaOfRect(float, float);
float areaOfTriangle(float, float);
float areaOfCircle(float);

int main(){

    int num;
    float a, b, r;

    printf("Enter one number 1-4:\n1 -> Square\n2 -> Rectangle\n3 -> Triangle\n4 -> Circle\n");
    scanf("%d", &num);

    if(num<=4 && num>=1){
        switch(num){
            case 1:
                printf("The figure is square!\nEnter the wall of square: ");
                scanf("%f", &a);
                printf("Area of Square -> %.2f\n", areaOfSquare(a));
                break;
            case 2:
                printf("The figure is rectangle!\nEnter the two walls of rectangle: ");
                scanf("%f%f", &a, &b);
                printf("Area of Rectangle -> %.2f\n", areaOfRect(a, b));
                break;
            case 3:
                printf("The figure is triangle!\nEnter the two walls of triangle: ");
                scanf("%f%f", &a, &b);
                printf("Area of Triangle -> %.2f\n", areaOfTriangle(a, b));
                break;
            case 4:
                printf("The figure is circle!\nEnter the radius of circle: ");
                scanf("%f", &r);
                printf("Area of Circle -> %.2f\n", areaOfCircle(r));
                break;
            default:
                printf("WHATEVER");
                break;
        }
    }



    return 0;
}

float areaOfSquare(float a){
    return a*a;
}

float areaOfRect(float a, float b){
    return a*b;
}

float areaOfTriangle(float a, float b){
    return (a*b)/2;
}

float areaOfCircle(float r){
    return r * r * 3.1415926;
}