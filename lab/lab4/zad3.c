#include <stdio.h>

int main(){

    int arr[8];
    int size = 8;
    int sum = 0;
    float average;

    for(int i = 0; i<8; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        while(arr[i] < -5000 || arr[i]>5000){
            printf("Enter new element %d: ", i);
            scanf("%d", &arr[i]);
        }
        sum += arr[i];
        
        
    }

    average = sum/size;

    for(int i = 0; i<8; i++){
        printf("Element[%d] = %d\n", i, arr[i]);
    }

    printf("The average is: %.2f\n", average);

    return 0;
}
