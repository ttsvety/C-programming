#include <stdio.h>

int main(){
    int a;
    int b;
    int h;

    printf("Enter the a, b and h parameters: ");
    scanf("%d %d %d", &a, &b, &h);

    int area = (a+b)*h/2;

    printf("Area is: %d", area);

    return 0;
}