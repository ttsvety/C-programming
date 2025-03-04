#include <stdio.h>

int main(){

    int first_sec, second_sec, third_sec, all_sec, minutes, new_sec;

    printf("Enter the seconds of the players: ");
    scanf("%d%d%d", &first_sec, &second_sec, &third_sec);

    if ((first_sec > 0 && first_sec <= 50) && (second_sec > 0 && second_sec <= 50) && (third_sec > 0 && third_sec <= 50)){
        all_sec = first_sec + second_sec + third_sec;

        printf("All seconds: %d\n", all_sec);

        minutes = all_sec/60;
        new_sec = all_sec - minutes*60;
        
        if (new_sec < 10){
            printf("%d:0%d", minutes, new_sec);
        }
        else{
            printf("%d:%d", minutes, new_sec);
        }

    }

    return 0;
}