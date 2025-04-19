#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int i;

    //otwarqne na file za izhod
    if((fp = fopen("myfile1", "wb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    i = 100;

    if(fwrite(&i, 2, 1, fp) != 1){
        printf("Write error occured. \n");
        exit(1);
    }

    fclose(fp);

    if((fp = fopen("myfile1", "rb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    if(fread(&i, 2, 1, fp) != 1){
        printf("Read error occured. \n");
        exit(1);
    }

    printf("i is %d", i);

    fclose(fp);

    return 0;
}