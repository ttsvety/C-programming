#include <stdio.h>

int main(){
    
    int N;
    int M;
    
    printf("Enter number N: ");
    scanf("%d", &N);
    printf("Enter number M: ");
    scanf("%d", &M);

    int arr[N][M];

    //Input numbers in array
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("Enter number arr[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

     //Print numbers in array
     for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d\n",  arr[i][j]);
        }
    }

    int small_num = arr[0][0], bigger_row;
    int bigger_num = arr[0][0], smaller_row;
    //Find bigger element
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d\n",  arr[i][j]);
            if(arr[i][j]>= bigger_num){
                bigger_num = arr[i][j];
                bigger_row = i;
            }
        }
    }

    //Find smaller element
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d\n",  arr[i][j]);
            if(arr[i][j]<= small_num){
                small_num = arr[i][j];
                smaller_row = i;
            }
        }
    }
    printf("Bigger: %d\nSmaller: %d\n", bigger_num, small_num);
    printf("Bigger row: %d\nSmaller row: %d\n", bigger_row, smaller_row);

    //Swap rows
    if (bigger_row != smaller_row) {
        for (int j = 0; j < M; j++) {
            int temp = arr[bigger_row][j];
            arr[bigger_row][j] = arr[smaller_row][j];
            arr[smaller_row][j] = temp;
        }
    }

    //Print numbers in array
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d\n",  arr[i][j]);
        }
    }
    
    return 0;
}