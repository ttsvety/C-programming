#include <stdio.h>

int main(){

    double h;
    double r;
    double area;
    double volume;

    printf("Enter h and r:\n");
    scanf("%lf %lf", &h, &r);

    area = 2*3.14*r*(r+h);

    volume = 3.14*r*2*h;

    printf("Radius -> %.2lfcm\nHeight-> %.2lfcm\nArea is = %.2lfkw.cm\nVolume is = %.2lf",r, h, area, volume);

    return 0;
}