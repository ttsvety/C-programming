#include <stdio.h>

int main(){
    float degree;

    printf("Enter degree: ");
    scanf("%f", &degree);

    float radian = degree * 0.0174533;

    printf("CONVERTED\ndegree -> radian = %.2f", radian);

    return 0;

}