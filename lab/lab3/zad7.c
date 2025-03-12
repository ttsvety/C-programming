#include <stdio.h>

void dec_to_bin(int num1){
    while(num1 > 0){
        int ostatuk = num1%2;
        num1 = num1/2;
        printf("%d", ostatuk);

    }
}

int main(){
    int x = 27;
    dec_to_bin(x);
    return 0;
}