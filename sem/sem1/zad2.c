#include <stdio.h>

int main(){
    float milimeter = 25.4;
    float cantimeter = 2.54;
    float decimeter = 0.254;
    float meter = 0.0254;

    int user_inch;

    printf("Enter number which will be converted in mm, cm, dm, m: ");

    scanf("%d", &user_inch);

    float conv_milimeter = milimeter*user_inch;
    float conv_cantimeter = cantimeter*user_inch;
    float conv_decimeter = decimeter*user_inch;
    float conv_meter = meter*user_inch;

    printf("Number is: %d\n", user_inch);
    printf("CONVERTED\n inch->mm : %.2f\n inch->cm : %.2f\n inch->dm : %.2f\n inch->m : %.2f\n",conv_milimeter, conv_cantimeter, conv_decimeter, conv_meter);
    
    return 0;

}