#include <stdio.h>

int main(){
    int N;

    printf("Enter number N: ");
    scanf("%d", &N);

    int arr[N][N];

    // Input numbers
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Enter num in row %d and col %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    //Print numbers 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("arr[%d][%d] = %d\n", i + 1, j + 1, arr[i][j]);
        }
    }

    printf("Main diagonal numbers:\n");
    //Print main diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j){
                printf("arr[%d][%d] = %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }


    printf("Main second numbers:\n");
    //Print second diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((i + j ) == N - 1){
                printf("arr[%d][%d] = %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }

    printf("Upper main diagonal numbers:\n");
    //Print upper main diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i<j){
                printf("arr[%d][%d] = %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }

    printf("Down main diagonal numbers:\n");
    //Print down main diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i>j){
                printf("arr[%d][%d] = %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }

    return 0;
}