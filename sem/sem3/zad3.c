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

    //Print array
    for(int i = 0; i < N; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");


    //Print reverse array numbers 
    for(int i = N-1; i >= 0; i--){
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}