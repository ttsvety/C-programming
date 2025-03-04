#include <stdio.h>

int main(){

    int x;
    
    printf("Enter value of x: ");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Sarurday");
            break;
        case 7:
            printf("Sunday");
            break;
        default: 
            printf("WHATEVER");
            break;

    }

    return 0;
}