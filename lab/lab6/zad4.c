#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10][10], s1 = 0, s2 = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("Enter num in row %d and col %d: ", i + 1, j + 1);
            a[i][j] = rand() % 10 + 0;
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("arr[%d][%d] = %d\n", i + 1, j + 1, a[i][j]);
        }
    }

    //sum of main diagonal
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j){
               s1 += a[i][j];
            }
        }
    }

    printf("Sum of main diagonal: %d\n", s1);

    //sum of second diagonal
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((i + j ) == 10 - 1){
               s2 += a[i][j];
            }
        }
    }

    printf("Sum of second diagonal: %d\n", s2);

    return 0;
}