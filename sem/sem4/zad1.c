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
    int check = 0;
    int row = 0;
    int col = 0;

    // Check for rows
    int temp = arr[row][col];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(arr[i][j]>=temp){
                temp = arr[i][j];
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
        row++;
        temp = arr[row][col];
        printf("%d\n", check);
    }


    //Check for colls

    check = 0;
    row = 0;
    col = 0;
    temp = arr[row][col];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(arr[j][i]<=temp){
                temp = arr[j][i];
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
        col++;
        temp = arr[row][col];
        printf("%d\n", check);
    }


    return 0;
}