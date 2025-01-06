#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char *str) {
    int inWord = 0;
    while (*str) {
        if (!inWord && isalpha(*str)) {
            *str = toupper(*str);
            inWord = 1;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
}

int main() {
    char str[] = "hello world";
    capitalizeWords(str);
    printf("%s\n", str);
    return 0;
}
