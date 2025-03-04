#include <stdio.h>

int main(){

    int x, y;
    int sum = 0;
    int multiply = 1;

    printf("Enter x and y: ");

    scanf("%d%d", &x, &y);

    for(int i = x+1 ; i < y; i++){
        if(i%2==0){
            sum += i;
        }
        else{
            multiply*=i;
        }
    }

    printf("Sum is -> %d\n", sum);
    printf("Multiply is -> %d", multiply);

    return 0;
}