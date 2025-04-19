#include <stdio.h>
#include <stdlib.h>

int* create_arr(int n);

void print_arr(int *ptr, int n);

int sum_arr(int *ptr, int n);

int bigger_num(int *ptr, int n);

int smaller_num(int *ptr, int n);

int sum_even(int *ptr, int n);

int main() {
    int n;
    printf("How many elements array will have: ");
    scanf("%d", &n);

    int *array = create_arr(n);

    int choice;
    printf("\n---Choose option---\n");
    printf("1 -> Print numbers\n");
    printf("2 -> Find sum\n");
    printf("3 -> Biggest num\n");
    printf("4 -> Smallest num\n");
    printf("5 -> Even numbers sum\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            print_arr(array, n);
            break;
        case 2:
            printf("Sum is %d\n", sum_arr(array, n));
            break;
        case 3:
            printf("Bigger num: %d\n", bigger_num(array, n));
            break;
        case 4:
            printf("Smaller num: %d\n", smaller_num(array, n));
            break;
        case 5:
            printf("Sum of even numbers: %d\n", sum_even(array, n));
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    free(array); // Освобождаваме паметта
    return 0;
}

int* create_arr(int n){
    int *nums;

    nums = (int*) malloc (n*sizeof(int));

    if(nums == NULL) { // Проверяваме за грешка при заделянето на памет
        printf("Memory allocation failed!\n");
        exit (1);
    }

    for(int i = 0; i < n; i++){
        int number;
        printf("Enter number with index %d: ", i);
        scanf("%d", &number);
        nums[i] = number;
    }

    return nums;
}

void print_arr(int *ptr, int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
}

int sum_arr(int *ptr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ptr[i];
    }
    return sum;
}

int bigger_num(int *ptr, int n){
    int first_el = ptr[0];
    for(int i = 0; i < n; i++){
        if(ptr[i] > first_el){
            first_el = ptr[i];
        }
    }
    return first_el;
}

int smaller_num(int *ptr, int n){
    int first_el = ptr[0];
    for(int i = 0; i < n; i++){
        if(ptr[i] < first_el){
            first_el = ptr[i];
        }
    }
    return first_el;
}

int sum_even(int *ptr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(ptr[i]%2==0){
            sum += ptr[i];
        }
    }
    return sum;
}