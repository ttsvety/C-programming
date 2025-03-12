#include <stdio.h>

float price_of_ton(float price, float one_barel_kg){
    
    float price_of_ton = price * (1000/one_barel_kg);
    return price_of_ton;
}
int main(){

    float price;

    printf("Enter price of barel: ");
    scanf("%f", &price);

    float barel_petrol_kg = 136.4;

    printf("%.2f", price_of_ton(price, barel_petrol_kg));

    return 0;
}