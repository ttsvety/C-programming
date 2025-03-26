#include <stdio.h>

int main(){

    char name[20];
    printf("Enter name: ");
   // scanf("%s", name); // Only one word
    fgets(name, sizeof(name), stdin); //read string
    printf("\nYour name is %s", name);
    puts(name); //Automated new line
    puts(name);
    

    return 0;
}