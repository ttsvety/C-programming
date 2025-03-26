#include <stdio.h>

int main(){
    int N, sum = 0, temp_sum = 0;

    printf("Enter number N: ");
    scanf("%d", &N);

    int square[N][N];

    // Input numbers
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Enter num in row %d and col %d: ", i + 1, j + 1);
            scanf("%d", &square[i][j]);
        }
    }

    //Print numbers 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("arr[%d][%d] = %d\n", i + 1, j + 1, square[i][j]);
        }
    }

    //first row
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < N; j++){
            sum += square[i][j];
        }
        temp_sum = sum;
    }

    sum = 0;

    //second row 
    for(int i = 1; i < 2; i++){
        for(int j = 0; j < N; j++){
            sum += square[i][j];
        }
        if(sum == temp_sum){
            //printf("Yes ");
            temp_sum = sum;
        }
    }

    sum = 0;
    //third row 
    for(int i = 2; i < 3; i++){
        for(int j = 0; j < N; j++){
            sum += square[i][j];
        }
        if(sum == temp_sum){
            //printf("Yes ");
            temp_sum = sum;
        }
    }

    sum = 0;
    //first col
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 1; j++){
            sum += square[i][j];
        }
        if(sum == temp_sum){
            //printf("Yes ");
            temp_sum = sum;
        }
    }

    sum = 0;
    //second col 
    for(int i = 0; i < N; i++){
        for(int j = 1; j < 2; j++){
            sum += square[i][j];
        }
        if(sum == temp_sum){
            //printf("Yes ");
            temp_sum = sum;
        }
    }

    sum = 0;
    //third col 
    for(int i = 0; i < N; i++){
        for(int j = 2; j < N; j++){
            sum += square[i][j];
        }
        if(sum == temp_sum){
            //printf("Yes ");
            temp_sum = sum;
        }
    }

    if (temp_sum != sum){
        printf("Square not magic");
    }
    else{
        printf("Square is magic and sum is: %d", sum);
    }


    return 0;
}