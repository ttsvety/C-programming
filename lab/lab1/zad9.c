#include <stdio.h>

int main(){

    int num;
    int _5digit, _4digit, _3digit, _2digit, _1digit;
    printf("Enter 5-digit num: ");
    scanf("%d", &num);

    _1digit = num/10000;
    _2digit = (num/1000)%10;
    _3digit = (num/100)%10;
    _4digit = (num/10)%10;
    _5digit = num %10;
    


    printf("%d\n%d\n%d\n%d\n5",_1digit, _2digit, _3digit, _4digit, _5digit);



    return 0;
}