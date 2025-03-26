#include <stdio.h>

int main(){

    char name[] = "Harry Potter";

    printf("%c\n", *name); // H
    printf("%c\n", *(name +1)); // a
    printf("%c\n", *(name+7)); // o

    char *namePtr = name;

    printf("%c\n", *namePtr); // H
    printf("%c\n", *(namePtr +1)); // a
    printf("%c\n", *(namePtr+7)); // o

    return 0;
}