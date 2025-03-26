#include <stdio.h>

int main(){
    float a[2][2];
    float b[2][2];
    float result[2][2];

    // Input elements in massive A
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter for massive A a number for row %d and col %d: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    //Print A
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("a[%d][%d] = %.2f\n", i, j, a[i][j]);
        }
    }

    // Input elements in massive B
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter for massive A a number for row %d and col %d: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    //Print B
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("b[%d][%d] = %f\n", i, j, b[i][j]);
        }
    }

    // Elements in massive result
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n");

    //Print result
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("result[%d][%d] = %.2f\n", i, j, result[i][j]);
        }
    }

    return 0;
}