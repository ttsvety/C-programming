#include <stdio.h>

int main(){

    int nums[50];
    int K;
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

    printf("Enter how many position will move: ");
    scanf("%d", &K);

    

    return 0;
}