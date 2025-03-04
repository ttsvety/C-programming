#include <stdio.h>

int main(){

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 6){
        printf("The number is bigger than 6");
    }
    else{
        printf("The number is less than 6");
    }

    return 0;
}