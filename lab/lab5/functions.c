#include <stdio.h>
#include <string.h>

int main(){

    char fname[20] = "Tsvetina";
    char lname[20] = "Tomova";
    char random[30];
    int len;

    // Copy fname into random
    strcpy(random, fname);
    printf("strcpy(random, fname):   %s\n", random);

    // Concatenate fname with lname
    strcat(fname, lname);
    printf("strcat(fname, lname):   %s\n", fname);

    // Total length of fname after concatenatenation
    len = strlen(fname);
    printf("strlen(fname):   %d\n", len);

    return 0;
}