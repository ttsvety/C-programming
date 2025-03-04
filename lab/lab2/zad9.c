#include <stdio.h>

int main(){

    int N, K;
    int count = 0;

    printf("Enter N and K: ");

    scanf("%d%d", &N, &K);

    for (int i = 0; i<N; i++){
        int new_num;
        printf("Add number: %d", i+1);
        scanf("%d", &new_num);
        
        if(new_num>K && new_num %3 ==0){
            count+=1;
        }

        printf("%d", count);
    }

    return 0;
}