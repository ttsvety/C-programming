#include <stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40, 50, 60};
    int* ptr = arr;

    printf("Size of arr[] %d\n", sizeof(arr));

    printf("Size of ptr %d\n", sizeof(ptr));

    return 0;
}