#include <stdio.h>
#include <ctype.h>

int main(){

    char text[] = "Hello";

    int count = 0;
    
    while(text[count] != '\0'){
        text[count] = toupper(text[count]);
        
        count++;
    }

    printf("%s", text);

    return 0;
}