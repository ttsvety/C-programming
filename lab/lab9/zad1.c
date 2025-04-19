#include <stdio.h>
#include <stdlib.h>

void create_file(char *filename);
void count_even_and_odd(char *filename);
void sort_nums(char *filename, char *txtFile);

int main(){
    create_file("zad1");
    count_even_and_odd("zad1");
    sort_nums("zad1", "sorted");
    return 0;
}



void create_file(char *filename){
    FILE *fp;
    if((fp = fopen(filename, "wb"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    int N;
    printf("Enter N numbers: ");
    scanf("%d", &N);

    if(fwrite(&N, sizeof(N), 1, fp) != 1){
        printf("Write error occured. \n");
        exit(1);
    }

    for(int i = 0; i < N; i++){
        int num;
        printf("Enter num %d: ", i+1);
        scanf("%d", &num);
        fwrite(&num, sizeof(num), 1, fp);
    }

    fclose(fp);

    printf("\nFile %s is created.\n", filename);

}


void count_even_and_odd(char *filename){
    FILE *fp;
    if((fp = fopen(filename, "rb"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    int N;
    fread(&N, sizeof(N), 1, fp);

    int even = 0, odd = 0;

    for(int i = 0; i < N; i++){
        int num;
        fread(&num, sizeof(num), 1, fp);

        if(abs(num)%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    fclose(fp);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}


void sort_nums(char *filename, char *txtFile) {
    FILE *fp;
    if((fp = fopen(filename, "rb"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    int N;
    fread(&N, sizeof(N), 1, fp);

    int *arr = malloc(N * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed\n");
        fclose(fp);
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fread(&arr[i], sizeof(int), 1, fp);
    }

    fclose(fp);  

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    FILE *out;
    if((out = fopen(txtFile, "wb"))==NULL){
        printf("Cannot open file");
        free(arr);
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fprintf(out, "%d\n", arr[i]);
    }

    fclose(out);
    free(arr);
    printf("Sorted numbers are in  %s\n", txtFile);
}
