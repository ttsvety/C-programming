#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char two_names[56];
    char id[7];
    float month_price;
    int locker;
}Members;

Members *members = NULL;
int count = 0;

void AddMember(Members **arr){
    FILE *fp;
    fp = fopen("membersText.txt", "a");
    if(fp ==NULL){
        printf("Error open file");
        exit(1);
    }

    *arr = (Members*)realloc(*arr, (count+1)*sizeof(Members));
    if(*arr == NULL){
        printf("Not enough memory");
        fclose(fp);
        exit(1);
    }

    Members temp;

    printf("Enter two names: ");
    fgets(temp.two_names, sizeof(temp.two_names), stdin);  // Use fgets to handle spaces
    temp.two_names[strcspn(temp.two_names, "\n")] = '\0';

    printf("Enter id, month_price, locker:");

    scanf("%s %f %d", temp.id, &temp.month_price, &temp.locker);

    getchar();  

    fprintf(fp, "%d;%s;%s;%.2f;%d\n", strlen(temp.two_names), temp.two_names, temp.id, temp.month_price, temp.locker);

   (*arr)[count] = temp;
    count++;

    fclose(fp);
}


void AverageSum(Members *arr){
    if(count == 0){
        return;
    }
    float sum = 0;

    for(int i = 0; i<count; i++){
        sum+=arr[i].month_price;
    }
    float average = sum / count;

    for (int i = 0; i < count; i++) {
        if (members[i].month_price < average) {
            printf("%s - %s - %.2f\n", members[i].two_names, members[i].id, members[i].month_price);
        }
    }

}


void ReadFromBinary(char *id){
    FILE *fp;
    fp = fopen("members.bin", "rb");
    if(fp == NULL){
        printf("Error");
        exit(1);
    }
    Members temp;
    int found = 0;

    while (fread(&temp, sizeof(Members), 1, fp) == 1) {
        if (strcmp(temp.id, id) == 0) {
            printf("Bin Names: %s\n", temp.two_names);
            printf("Bin ID: %s\n", temp.id);
            printf("Bin M_Price: %.2f\n", temp.month_price);
            printf("Bin Locker: %d\n", temp.locker);
            found++;
            break;
        }
    }

    if (!found) {
        printf("Member with ID %s not found in binary file.\n", id);
    }


    fclose(fp);
}

void SaveToBinary() {
    FILE *fp = fopen("members.bin", "wb");
    if (!fp) {
        printf("Error creating binary file.\n");
        return;
    }

    fwrite(members, sizeof(Members), count, fp);
    fclose(fp);
}
int main() {

    AddMember(&members);  // подаваме адреса на указателя
    AddMember(&members);
    AddMember(&members);

    for (int i = 0; i < count; i++) {
        printf("Member %d: %s, ID: %s, Month Price: %.2f, Locker: %d\n",
               i + 1, members[i].two_names, members[i].id, members[i].month_price, members[i].locker);
    }

    SaveToBinary();
    AverageSum(members);

    ReadFromBinary("611");
    // Освобождаваме паметта
    free(members);

    return 0;
}