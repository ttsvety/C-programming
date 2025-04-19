#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int i;

    //otwarq myfile za chetene
    if((fp = fopen("myfile", "w"))==NULL){
        printf("Cannot open file. \n");
        exit(1);
    }
    
    //zapiswame str
    p = str;
    while(*p){
        if(fputc(*p, fp)==EOF){
            printf("Error writing file");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    //otwarqme myfile za chetene
    if((fp = fopen("myfile", "r"))==NULL){
        printf("Cannot open file. \n");
        exit(1);
    }

    for(;;){
        i = getc(fp);
        if(i==EOF){
            break;
        }
        putchar(i);
    }
    fclose(fp);

    return 0;
}