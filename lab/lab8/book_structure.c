#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  Books{
    char author[30]; //poleta
    char title[40];
    char tema[50];
    int id_num;
};//book; //-> tipa vse edno

typedef struct Books book;
// Function declaration
void printBook(struct Books book);

//moje i v glavnata funciq

int main(){
    //struct Books book1;
    //struct Books book2;
    book book1, book2;
    book1.title; //dostup

    strcpy(book1.author, "Steve McConell");
    strcpy(book1.title, "Programming in C"); //zadawane na tekst stojnost ot koda
    strcpy(book1.tema, "Programming");
    book1.id_num = 1235; //zadawane na chislo stojnost ot koda

    printBook(book1);
    
    strcpy(book2.author, "Martin Fower");
    strcpy(book2.title, "Programming in Python"); 
    strcpy(book2.tema, "Easy programming");
    book2.id_num = 6789; 

    printBook(book2);


    return 0;
}

void printBook(struct Books book){
    printf("\nBOOK\nAuthor: %s\nTitle: %s\nTema: %s\nId_num: %d\n", book.author, book.title, book.tema, book.id_num);

}