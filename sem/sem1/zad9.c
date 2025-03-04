#include <stdio.h>

int main(){

    float width, height;
    int work_desk, count_desk_width, count_desk_height;

    printf("Enter param of the room: \n");
    scanf("%f%f", &width, &height);

    width = width - 1;
    count_desk_width = width/0.7;
    count_desk_height = height/1.2;

    work_desk = (count_desk_width * count_desk_height) - 3;

    printf("Count desks: %d", work_desk);
    
    return 0;
}