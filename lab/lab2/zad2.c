#include <stdio.h>

int main(){

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num % 8 == 5){
        printf("The remainder is five");
    }
    else{
        printf("The remainder is not five");
    }

    return 0;
}