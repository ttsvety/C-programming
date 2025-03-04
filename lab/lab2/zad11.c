#include <stdio.h>

int main(){

    int x, y;
    int value = 0;
    printf("Enter x and y: ");

    scanf("%d%d", &x, &y);

    for(int i = x+1 ; i < y; i+=0.01){
        value += i*i-4;
        printf("Value is for %d  -> %d\n",i, value);
        }

    return 0;
}