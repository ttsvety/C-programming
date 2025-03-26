#include <stdio.h>

int find_length(char str[]);
int main(){

    char str1[] = "Tsvetina";
    int length = find_length(str1);

    printf("The length of string \"%s\" is   %d", str1, length);

    return 0;
}

int find_length(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}