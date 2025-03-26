#include <stdio.h>

int main(){

    int words = 1;
    char str1[] = "Hello, world! Have a nice day!";

    int count = 0;
    
    while(str1[count] != '\0'){
        if (str1[count] == ' '){
            words++;
        }
        count++;
    }

    printf("The length of string \"%s\" is   %d", str1, words);

    return 0;
}
