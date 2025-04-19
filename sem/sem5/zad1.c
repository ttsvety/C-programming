#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){

    float sum_spended = 0;
    int chair_count = 0, chair_left = 0, table_count = 0, table_left = 0, cup_count = 0, cup_left = 0, dishes_count = 0, dishes_left = 0;
    float chair_price = 13.99, table_price = 42.00, cup_price = 5.98, dishes_price = 21.02;
    char word[15] = "PARTY!";
    char product[30];
    int guests;
    int table_needed = 0, cup_needed = 0, dishes_needed = 0;
    int complect_dishes = 0, complect_cups = 0;

    printf("Enter number of guests: ");
    scanf("%d", &guests);

    table_needed = ceil((float)guests/8);
    cup_needed = guests;
    dishes_needed = guests;

    while(true){
        printf("Enter products he buy: ");
        scanf("%s", product);
        
        if(strcmp(product, "Chair")==0){
            chair_count ++;
        }
        else if(strcmp(product, "Table")==0){
           table_count ++;
        }
        else if(strcmp(product, "Cups")==0){
            cup_count++;
        }
        else if(strcmp(product, "Dishes")==0){
            dishes_count++;
        }
        else if(strcmp(product, word)==0){
            printf("\nEnd. Party is the word!\n");

            break;
        }
    }


    sum_spended = (chair_count*chair_price) + (table_count*table_price) + (cup_count*cup_price) + (dishes_count*dishes_price);
    printf("%.2f\n", sum_spended);

    chair_left = guests - chair_count;
    if(chair_left > 0){
        printf("%d Chairs\n", chair_left);
    }

    table_left = table_needed - table_count;
    if(table_left > 0){
        printf("%d Tables\n", table_left);
    }

    cup_left = cup_needed - cup_count*6;
    complect_cups = ceil((float)cup_left/6);
    if(complect_cups > 0){
        printf("%d Cups\n", complect_cups);
    }

    dishes_left = dishes_needed - dishes_count*6;
    complect_dishes = ceil((float)dishes_left/6);
    if(complect_dishes > 0){
        printf("%d Dishes\n", complect_dishes);
    }



    return 0;
}