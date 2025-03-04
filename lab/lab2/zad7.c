#include <stdio.h>

int main(){

    int x, y;
    int sum = 0;

    printf("Enter x and y: ");

    scanf("%d%d", &x, &y);

    for(int i = x+1 ; i < y; i++){
        sum += i;
    }

    printf("Sum is -> %d", sum);

    return 0;
}