#include <stdio.h>

int main(){
    float celsium;

    printf("Enter Celsium°C degree: ");
    scanf("%f", &celsium);

    float farenhait = (celsium * 1.8) + 32;

    printf("CONVERTED\nCelsium°C -> Farenhait°F = %.2f", farenhait);

    return 0;

}