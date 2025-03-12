#include <stdio.h>

int even_or_odd(int num1){
    if(num1 %2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int x = 4, y = 5;

    printf("%d\n", even_or_odd(x));
    printf("%d\n", even_or_odd(y));

}