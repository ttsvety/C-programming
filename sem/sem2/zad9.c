#include <stdio.h>

int main(){

    int X, Y, Z, workers;

    printf("Enter X (kw.m), Y(kg. grapes), Z(needed wine), N(workers): ");
    scanf("%d%d%d%d", &X, &Y, &Z, &workers);

    double total_grapes = X*Y;

    double grapes_for_wine = 0.4 * total_grapes;

    double produced_wine = grapes_for_wine/2.5;

    if(produced_wine<Z){
        printf("Not enough wine");
    }
    else{
        double remain = produced_wine - Z;
        double wine_per_worker = remain/workers;

        printf("Enough wine! All wine is %.2lf but we want %d\n", produced_wine, Z);
        printf("We have remaining wine which is %.2lf\n", remain);
        printf("Every worker will get %.2lf\n", wine_per_worker);
        
    }


    return 0;
}