#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char* str) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi da nhap: %s\n", str);
    printf("So tu trong chuoi: %d\n", countWords(str));

    return 0;
}
