#include <stdio.h>
#include <math.h>

int main(){

    float a_x;
    float a_y;
    float b_x;
    float b_y;

    printf("Enter the Coordinates (x, y) of A: ");
    scanf("%f %f", &a_x, &a_y);

    printf("Enter the Coordinates (x, y) of B: ");
    scanf("%f %f", &b_x, &b_y);

    float x = fabs(b_x - a_x);
    float y = fabs(b_y - a_y);
    float area = x*y;

    printf("Area is: %.2f", area);

    return 0;

}