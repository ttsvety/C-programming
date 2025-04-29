#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int age;
    char country[20];
    long long money;
    int prizes;
}Artist;

Artist *artist_arr = NULL;
Artist *new_arr = NULL;
int counter = 0;
int new_count = 0;


void AddNewArtist(Artist *ap){
    artist_arr = (Artist*)realloc(artist_arr, (counter+1)*(sizeof(Artist)));
    if(artist_arr == NULL){
        printf("NOt enough memory");
        exit(1);
    } 

    artist_arr[counter] = *ap;
    counter++;
}

Artist * ReturnCertainIncomeArtistArray(Artist *ap, long int money){
    Artist *newArr  = NULL;
    new_count = 0;
    for(int i = 0; i< counter; i++){
        if(ap[i].money > money){
            newArr = (Artist*)realloc(newArr, (new_count+1)*sizeof(Artist));
            if(newArr == NULL){
                printf("Error");
                exit(1);
            }
            newArr[new_count] = ap[i];
            new_count++;
        }
    }
    return newArr;

}

void ReadArtists(){
    int count = 0;
    FILE *fp;
    fp = fopen("artist.txt", "r");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }

    Artist temp;
    while(fscanf(fp, "%[^;];%d;%[^;];%lld;%d\n", temp.name, &temp.age, temp.country, &temp.money, &temp.prizes) == 5){
        new_arr = (Artist*)realloc(new_arr, (count+1)*sizeof(Artist));
        if(new_arr == NULL){
            printf("Not enough memory");
            fclose(fp);
            exit(1);
        }
        new_arr[count] = temp;
        count++;
    }
    fclose(fp);

    for(int i = 0; i < count; i++){
    printf("%s (%s), %d year., Income %lld, Oscars: %d\n", new_arr[i].name, new_arr[i].country, new_arr[i].age, new_arr[i].money, new_arr[i].prizes);

    }
    free(new_arr);
}

int main() {
    Artist a1 = {"Ivan", 45, "BG", 2000000, 1};
    Artist a2 = {"Maria", 37, "USA", 3500000, 3};

    AddNewArtist(&a1);
    AddNewArtist(&a2);

    printf("Added artists:\n");
    for (int i = 0; i < counter; i++) {
        printf("%s (%s), %d year., Income %lld, Oscars: %d\n", artist_arr[i].name, artist_arr[i].country, artist_arr[i].age, artist_arr[i].money, artist_arr[i].prizes);
    }

    Artist * new_arr = ReturnCertainIncomeArtistArray(artist_arr, 2500000);

    printf("new artists:\n");
    for (int i = 0; i < new_count; i++) {
        printf("%s (%s), %d year., Income %lld, Oscars: %d\n", new_arr[i].name, new_arr[i].country, new_arr[i].age, new_arr[i].money, new_arr[i].prizes);
    }
    // Освобождаваме паметта
    free(artist_arr);
    free(new_arr);

    printf("\n");
    ReadArtists();
    return 0;
}
