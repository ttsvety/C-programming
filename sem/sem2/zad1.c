//6, 9, 11
#include <stdio.h>

int bigger_num(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int smaller_num(int num1, int num2){
    if(num1 < num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){

    int num, max_value, min_value;
    int first_num = 1;

    printf("Enter numbers (0 it ends): ");
    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }

        if(first_num){
            max_value = min_value = num;
            first_num = 0;
        }
        else{
            max_value = bigger_num(max_value, num);
            min_value = smaller_num(min_value, num);
        }

    }
    
    printf("Max number is: %d\n", max_value);
    printf("Min number is %d\n", min_value);

    return 0;
}