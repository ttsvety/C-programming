#include <stdio.h>

int main(){

    float num1=4, num2=2;
    float *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    float suma = *p1 + *p2;
    float difference = *p1 - *p2;
    float multiply = *p1 * *p2;

    float devision;

    if(*p2 != 0){   
        devision = *p1 / *p2;
    }
    else{
        printf("Eroor");
    }
    

    printf("Sum -> %f\nDifference -> %f\nMultiply -> %f\nDevision -> %f\n", suma, difference, multiply, devision);
    
    return 0;
}