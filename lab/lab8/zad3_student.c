#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students{
    int grade;
    int id_num;
};

struct Class{
    struct Students st[30];
    int students_count;
};

struct Vipusk{
    struct Class class[6];
    int class_count;    
};

float sreden_bal(struct Class *class){
    float suma = 0.0;
    int count = 0;
    for(int i = 0; i < class->students_count; i++){
        suma += class->st[i].grade;
        count ++;
    }
    return suma/count;

}

float sreden_bal_vipusk(struct Vipusk *vipusk){
    float suma = 0.0;
    int count = 0;
    for(int i = 0; i < vipusk->class_count; i++){
        for(int j = 0; j < vipusk->class[i].students_count; j++){
        suma += vipusk->class[i].st[j].grade;
        count ++;
        }
    }
    return suma/count;

}

int main(){
    struct Vipusk vipusk;
    vipusk.class_count = 2;

    
    // Въвеждане на ученици за всеки клас
    for(int i = 0; i < vipusk.class_count; i++){
        printf("Vuvedete broi uchenici za klas %d: ", i + 1);
        scanf("%d", &vipusk.class[i].students_count);

        for(int j = 0; j < vipusk.class[i].students_count; j++){
        printf("Vuvedete grade i ID za uchenik %d: ", j + 1);
        scanf("%d %d", &vipusk.class[i].st[j].grade, &vipusk.class[i].st[j].id_num);

        }
    }

    // Принтиране на ученици и оценки
    for (int i = 0; i < vipusk.class_count; i++) {
        printf("Klas %d:\n", i + 1);
        for (int j = 0; j < vipusk.class[i].students_count; j++) {
            printf("Grade: %d, ID: %d\n", vipusk.class[i].st[j].grade, vipusk.class[i].st[j].id_num);
        }

        float sr = sreden_bal(&vipusk.class[i]);
        printf("Sreden uspeh na klas %d: %.2f\n", i + 1, sr);
    }

    float sr_v = sreden_bal_vipusk(&vipusk);
    printf("Sreden uspeh na VIPUSKA: %.2f\n", sr_v);

    return 0;
}