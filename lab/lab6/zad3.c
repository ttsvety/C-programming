#include <stdio.h>

int main(){
    int N = 4, S = 0, S1 = 0, S2 = 0;

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


    //Sum in matrix
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            S += arr[i][j];
        }
    }

    printf("Sum S is: %d\n", S);



    //sum upper main diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i<j){
                S1 += arr[i][j];
            }
        }
    }

    printf("Sum S1 is: %d\n", S1);


    //sum down main diagonal
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i>j){
                S2 += arr[i][j];
            }
        }
    }

    printf("Sum S2 is: %d\n", S2);

    return 0;
}