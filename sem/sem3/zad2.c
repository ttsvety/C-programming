#include <stdio.h>

int main(){

    int nums[50];
    int N;

    //Input how many numbers we will have
    printf("Enter how many number the array will have: ");
    scanf("%d", &N);

    // Input numbers in the array
    for(int i = 0; i < N; i++){
        printf("Enter num %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    //Print array numbers 
    for(int i = 0; i < N; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    for(int i = 0; i < N -1; i++){
        if(nums[i] < nums[i+1] && nums[i+1] > nums[i]) 
            printf("The relation is valid\n");
        else
            printf("The relation is not valid\n");
    }

    return 0;
}