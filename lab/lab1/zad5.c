#include <stdio.h>

int main(){

    double d;
    double perimeter;

    printf("Enter d:\n");
    scanf("%lf", &d);

    perimeter = 3.14 *d;

    printf("d -> %.2lfcm\nPerimeter is = %.2lf m", d, perimeter);

    return 0;
}