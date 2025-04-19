#include <stdio.h>
#include <stdlib.h>

void create_file(char *filename);
void count_even_and_odd(char *filename);
void sort_nums(char *filename, char *txtFile);

int main(){
    create_file("zad2");
    count_even_and_odd("zad2");
    sort_nums("zad2", "sorted2");
    return 0;
}



void create_file(char *filename){
    FILE *fp;
    if ((fp = fopen(filename, "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    int *arr = NULL;
    int count = 0;
    int num;
    
    printf("Въведи цели числа (0 за край):\n");
    
    while (1) {
        printf("Число %d: ", count + 1);
        scanf("%d", &num);
        if (num == 0) break;
    
        int *temp = realloc(arr, (count + 1) * sizeof(int));
        if (!temp) {
            printf("Memory allocation failed\n");
            free(arr);
            fclose(fp);
            exit(1);
        }
    
        arr = temp;
        arr[count++] = num;
        }
    
        fwrite(&count, sizeof(int), 1, fp);    
        fwrite(arr, sizeof(int), count, fp);        
    
        fclose(fp);
        free(arr);
    
        printf("\nFile \"%s\" is created with %d numbers.\n", filename, count);
}
    


void count_even_and_odd(char *filename){
    FILE *fp;
    if ((fp = fopen(filename, "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    int *arr = NULL;
    int count = 0;
    int num;

    while (fread(&num, sizeof(int), 1, fp) == 1) {
        int *temp = realloc(arr, (count + 1) * sizeof(int));
        if (!temp) {
            printf("Memory allocation failed.\n");
            free(arr);
            fclose(fp);
            exit(1);
        }
        arr = temp;
        arr[count++] = num;
    }

    fclose(fp);

    int even = 0, odd = 0;

    for (int i = 0; i < count; i++) {
        int temp = abs(arr[i]);

        if(temp%2==0){
            even++;
        }
        else{
            odd++;
        }

    free(arr);

    printf("even: %d\n", even);
    printf("Odd: %d\n", odd);
    }
    
}

    void sort_nums(char *filename, char *txtFile) {
        FILE *fp;
        if ((fp = fopen(filename, "rb")) == NULL) {
            printf("Cannot open binary file.\n");
            exit(1);
        }
    
        int *arr = NULL;
        int count = 0;
        int num;
    
        while (fread(&num, sizeof(int), 1, fp) == 1) {
            int *temp = realloc(arr, (count + 1) * sizeof(int));
            if (!temp) {
                printf("Memory allocation failed.\n");
                free(arr);
                fclose(fp);
                exit(1);
            }
            arr = temp;
            arr[count++] = num;
        }
    
        fclose(fp);
    
        // Сортиране (bubble sort)
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    
        FILE *out;
        if ((out = fopen(txtFile, "w")) == NULL) {
            printf("Cannot open output text file.\n");
            free(arr);
            exit(1);
        }
    
        for (int i = 0; i < count; i++) {
            fprintf(out, "%d\n", arr[i]);
        }
    
        fclose(out);
        free(arr);
    
        printf("Sorted numbers are in  \"%s\"\n", txtFile);
    }
