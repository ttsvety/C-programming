#include <stdio.h>

float areaOfCircle(float radius){
    float result;
    result = radius * radius * 3.1415926;
    return result;
}

int main(){
    float radius1, radius2;
    float area1, area2;
    radius1 = 6.0;

    printf("Vavedete radius: ");
    scanf("%f", &radius2);

    area1 = areaOfCircle(radius1);
    area2 = areaOfCircle(radius2);

    printf("First circle with radius %f has area: %.2f\n", radius1, area1);
    printf("Second circle with radius %f has area: %.2f\n", radius2, area2);

    return 0;
}