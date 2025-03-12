#include <stdio.h>

int main(){

    float num = 105.25;
    float *n;
    n = &num;

    printf("The address of variable is %x and its value is %f\n", &num, *n);

    char symb = '$';
    char *c = &symb;

    printf("The address of variable is %x and its value is %c\n", c, *c);

    return 0;
}