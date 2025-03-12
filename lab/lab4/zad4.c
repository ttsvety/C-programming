#include <stdio.h>
#include <math.h>

int main(){

    int arr[7];
    int size = 7;
    int sum = 0;
    float average;
    int min_diff = 0;
    int place = 0;

    for(int i = 0; i<7; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        while(arr[i] < -5000 || arr[i]>5000){
            printf("Enter new element %d: ", i);
            scanf("%d", &arr[i]);
        }
        sum += arr[i];
        
        
    }
    average = sum/size;

    min_diff = fabs(arr[0] - average);
    int closest = arr[0];

    for(int i = 1; i<7; i++){
        if(fabs(arr[i]-average)<=min_diff){
            min_diff = fabs(arr[i]-average);
            closest = arr[i];
            place = *(arr+i);
        }
    }

    for(int i = 0; i<7; i++){
        printf("Element[%d] = %d\n", i, arr[i]);
    }

    printf("The average is: %.2f\n", average);   
    printf("The min difference is: %d\n on %x place", closest, place);


    return 0;
}
