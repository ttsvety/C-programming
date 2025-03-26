#include <stdio.h>

const int WEEK = 7;
const int CITY = 2;

int main(){
    int temperature[CITY][WEEK];

    for(int i = 0; i < CITY; i++){
        for(int j = 0; j < WEEK; j++){
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }

    for(int i = 0; i < CITY; i++){
        for(int j = 0; j < WEEK; j++){
            printf("temperature[%d][%d] = %d\n ", i+1, j+1, temperature[i][j]);
        }
    }

    return 0;
}