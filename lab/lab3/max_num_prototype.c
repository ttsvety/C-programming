#include <stdio.h>

int max(int, int);

void main(){
    int x = 4, y = 5;

    printf("%d", max(x, y));
}

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }
    return result;
}