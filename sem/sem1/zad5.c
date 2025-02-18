#include <stdio.h>

int main(){
    float lv;

    printf("Enter lv: ");
    scanf("%f", &lv);

    float dollar = lv * 0.53;
    float euro = lv * 0.51;
    float pound = lv * 0.42;


    printf("CONVERTED\nlv -> dollar = %.2f\nlv -> euro = %.2f\nlv -> pound = %.2f\n", dollar, euro, pound);

    return 0;

}