#include <stdio.h>

int main(){

    int x, y, z, minimum;
    printf("Enter values of x, y and z: ");
    scanf("%d%d%d", &x, &y, &z);

    minimum = x;

    if (y < minimum){
        minimum = y;
    }
    else if (z<minimum){
        minimum = z;
    }
    else{
        minimum = x;
    }

    printf("Minimum of %d, %d, %d is %d", x, y, z, minimum);

    return 0;
}