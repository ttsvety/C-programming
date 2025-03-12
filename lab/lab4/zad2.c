#include <stdio.h>

int bigger_num(int arr[]);

int main(){

    int arr[7];
    int sum = 0;

    for(int i = 0; i<7; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        while(arr[i] < -5000 || arr[i]>5000){
            printf("Enter new element %d: ", i);
            scanf("%d", &arr[i]);
        }
    }

    for(int i = 0; i<7; i++){
        printf("Element[%d] = %d\n", i, arr[i]);
    }

    printf("The bigger num is: %d\n", bigger_num(arr));

    return 0;
}

int bigger_num(int arr[7]){
    int max = arr[0];
    for(int i=1; i <7;  i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}