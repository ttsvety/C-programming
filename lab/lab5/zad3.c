#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Have a nice day!";
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Превръщаме в малка буква

        // Проверяваме дали вече сме броили тази буква
        int already_counted = 0;
        for (int k = 0; k < i; k++) {
            if (tolower(str[k]) == ch) {
                already_counted = 1;
                break;
            }
        }
        if (already_counted) {
            continue; // Прескачаме, ако вече сме броили тази буква
        }

        // Броим колко пъти се среща текущата буква
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (tolower(str[j]) == ch) {
                count++;
            }
        }
        
        printf("%c -> %d\n", ch, count);
    }

    return 0;
}
