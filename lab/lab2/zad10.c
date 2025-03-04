#include <stdio.h>

int main(){

    int num;
    int sum = 0;

    do{
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    }while(num  != 0);

    printf("Sum : %d", sum);

    
    return 0;
}