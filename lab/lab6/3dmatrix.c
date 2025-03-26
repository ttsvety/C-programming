#include <stdio.h>

int main(){
    int arr_3d[2][3][2];

    //Input
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int m = 0; m < 2; m++){
                printf("Enter the number in row %d col %d and element %d: ", i + 1, j + 1, m + 1);
                scanf("%d", &arr_3d[i][j][m]);
            }
        }
    }

    //Print
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int m = 0; m < 2; m++){
                printf("arr_3d[%d][%d][%d] = %d\n", i + 1, j + 1, m + 1, arr_3d[i][j][m]);
            }
        }
    }

    return 0;
}