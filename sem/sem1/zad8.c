#include <stdio.h>
#include <math.h>

int main(){

    float a_x;
    float a_y;
    float b_x;
    float b_y;
    float c_x;
    float c_y;

    printf("Enter the Coordinates (x, y) of A: ");
    scanf("%f %f", &a_x, &a_y);

    printf("Enter the Coordinates (x, y) of B: ");
    scanf("%f %f", &b_x, &b_y);

    printf("Enter the Coordinates (x, y) of C: ");
    scanf("%f %f", &c_x, &c_y); 

    float c = fabs(b_x - a_x);

    float hc = fabs(c_y - b_y);

    float area = (c*hc)/2;

    printf("Area is: %.2f", area);

    return 0;

}