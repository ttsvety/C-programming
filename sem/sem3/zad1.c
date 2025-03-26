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

    //Sorting array
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(nums[j] > nums[j+1]){
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

    //Begin and length of equal elements in array
    int count = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(nums[j] == nums[j+1]){
                count++;
            }
            else{
                count = 1;
            }
        }
    }
    printf("\n%d", count);


    return 0;
}