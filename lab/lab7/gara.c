#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    int *stations; //  array for gara

    i = 7;

    //stations = (int*) malloc (i*4); //dynamic memory
    stations = (int*) calloc (i, sizeof(int));

    if(stations == NULL){
        printf("Not enough memory!!!\n");
        exit (1);
    }
    
    for(n = 0; n < i; n++){
        stations[n] = n;
    }

    for(n = 0; n < i; n++){
        printf("%d\n", stations[n]);
    }
    printf("\n");

    int *ptrToStation;
    ptrToStation = stations;

    //stations = (int*) malloc (++i*4);//Increase counto 8 with ++i
    stations = (int*) calloc (++i, sizeof(int));

    for(n = 0; n < i; n++){
        stations[n] = ptrToStation[n];
        stations[i-1] = i-1;
    }

    for(n = 0; n < i; n++){
        printf("%d\n", stations[n]);
    }

    ptrToStation = stations;
    int x = 3;
    for(n = x; n < i; n++){
        ptrToStation[n-1] = ptrToStation[n];
    }

    //stations = (int*) malloc (--i*4);
    stations = (int*) calloc (--i, sizeof(int));

    for(n = 0; n < i; n++){
        stations[n] = ptrToStation[n];
    }

    for(n = 0; n < i; n++){
        printf("%d", stations[n]);
    }

    free(stations);
    free(ptrToStation);

    return 0;
}