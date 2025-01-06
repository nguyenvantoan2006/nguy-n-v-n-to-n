#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char c;
    printf("Nh?p chu?i: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Nh?p k� t? c?n x�a: ");
    scanf("%c", &c);
    removeChar(str, c);
    printf("Chu?i sau khi x�a k� t? '%c': %s\n", c, str);
    return 0;
}
