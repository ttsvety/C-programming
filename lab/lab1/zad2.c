#include <stdio.h>

int main(){

    int a = 25, b;
    char c = 'a', d;
    float f = 3.235, g;

    printf("a->%d\nc->%c\nf->%f\n", a, c, f);

    printf("Deklariraj b, d, g: ");
    scanf("%d %c %f", &b, &d, &g);
    printf("b->%d\nd->%c\ng->%f", b, d, g);



    return 0;
}