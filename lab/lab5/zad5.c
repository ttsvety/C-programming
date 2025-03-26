#include <stdio.h>
#include <string.h>

void vowel_count(char text[], char vowel_count[]);
int main(){
    char text[] = "Hello";
    char vowel[] = {'a', 'e', 'i', 'o', 'u', '\0'};

    vowel_count(text, vowel);

    return 0;
}

void vowel_count(char text[], char vowel_count[]){
    int vowel = 0;
    int count = 0;
    for(int i = 0; i< strlen(text); i++){
        for(int j= 0; j< strlen(vowel_count); j++)
        if(text[i] == vowel_count[j]){
            vowel++;
            
        }
        else{
            count++;
        }
    }
    printf("%d", vowel);
}