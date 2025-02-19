#include <stdio.h>

int main(){

    double a;
    double b;
    double area;

    printf("Enter a and b:\n");
    scanf("%lf%lf", &a, &b);

    area = a*b;

    printf("a -> %.2lfcm    b -> %.2lfcm\nArea is = %.2lf kw.sm", a, b, area);

    return 0;
}