#include <stdio.h>

int main(){

    int nums[50];
    int N;
    int K;

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

    //Sorting array
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(nums[j] < nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    //Print sorted array numbers 
    for(int i = 0; i < N; i++){
        printf("%d ", nums[i]);
    }

    printf("\nEnter the K element: ");
    scanf("%d", &K);

    printf("%d", nums[K-1]);

    return 0;

}