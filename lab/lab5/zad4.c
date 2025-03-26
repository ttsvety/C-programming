#include <stdio.h>
#include <stdbool.h>

bool is_equal(char str1[], char str2[]);
int main(){

    char str1[] = "Tsvetina";
    char str2[] = "Katerina";
    char str3[] = "Tsvetina";

    printf("Is \"%s\" equal to \"%s\" -> %d\n", str1, str2, is_equal(str1, str2));
    printf("Is \"%s\" equal to \"%s\" -> %d\n", str1, str3, is_equal(str1, str3));
    


    return 0;
}

bool is_equal(char str1[], char str2[]){
    bool is_equal = false;
    int count = 0;
    while (str1[count] != '\0' && str2[count] != '\0' && str1[count] == str2[count]){
        count++;
        if(str1[count] == '\0' && str2[count] == '\0'){
            is_equal = true;
        }
        else{
           is_equal = false;
        }
    }
    return is_equal;
}