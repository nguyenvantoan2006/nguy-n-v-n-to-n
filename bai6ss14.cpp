#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }

    printf("Chuoi da khai bao: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}
