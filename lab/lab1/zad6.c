#include <stdio.h>

int main(){

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    _Bool is_true1 = (x>5)&&(x<=10);
    _Bool is_true2 = (x<4)||(x>12);
    _Bool is_true3 = (x>4)&&(x!=6);

    printf("%d\n%d\n%d", is_true1, is_true2, is_true3);

    return 0;
}