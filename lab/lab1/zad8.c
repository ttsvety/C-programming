#include <stdio.h>

int main(){

    int seconds;
    int hour;
    int minutes;
    int new_sec;
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hour = seconds/3600;
    minutes = (seconds - (hour*3600))/60;
    new_sec = (seconds-(hour*3600)-(minutes*60));

    printf("Seconds are: %d\n%dhours %dminutes %dseconds", seconds, hour, minutes, new_sec);
    return 0;
}
