#include <stdio.h>

int main(){

    int arr[9];
    int sum = 0;

    for(int i = 0; i<9; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        while(arr[i] < -5000 || arr[i]>5000){
            printf("Enter new element %d: ", i);
            scanf("%d", &arr[i]);
        }
        sum += arr[i];
        
    }

    for(int i = 0; i<9; i++){
        printf("Element[%d] = %d\n", i, arr[i]);
    }

    printf("Sum is %d\n", sum);

    return 0;
}