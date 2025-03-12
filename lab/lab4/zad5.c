#include <stdio.h>

int main(){

    int arr[20];
    int positive[20];
    int negative[20];
    int posCount = 0;
    int negCount = 0;

    //First array
    for(int i=0; i<20; i++){
        arr[i] = rand() % 21 - 10;
    }

    printf("First array\n");
    //Printing first arr
    for(int i = 0; i<20; i++){
        printf("Element[%d] = %d\n", i, arr[i]);
    }

    // Second array and third
    for(int i = 0; i<20; i++){
        if(arr[i]>0){
            positive[posCount++] = arr[i];
        }
        else{
            negative[negCount++] = arr[i];
        }
    }

    printf("\n\nSecond array\n");
     //Printing second arr
     for(int i = 0; i<posCount; i++){
        printf("Element[%d] = %d\n", i, positive[i]);
    }

    printf("\n\nThird array\n");
     //Printing second arr
     for(int i = 0; i<negCount; i++){
        printf("Element[%d] = %d\n", i, negative[i]);
    }

    return 0;
}