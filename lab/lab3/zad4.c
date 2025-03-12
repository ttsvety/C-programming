#include <stdio.h>

void changeNum(int var1, int var2, int **p1, int **p2){
    *p2 = &var1;
    *p1 = &var2;

}

int main(){

    int x = 5, y = 20;
    int *p1 = &x, *p2 = &y;

    printf("Adress of %d is %x.\nAdress of %d is %x.\n", *p1, &x, *p2, &y);

    changeNum(x, y, &p1, &p2);

    printf("Adress of %d is %x.\nAdress of %d is %x.\n", *p1, &x, *p2, &y);




    return 0;
}