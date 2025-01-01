#include <stdio.h>
#inclue <string.h>
int main() {
    char str[]= "Hello, My Love";
    int length = strlen(str);
    printf("Chuoi da khai bao:%s\n",str);
    printf("Cac ky tu trong chuoi");
    for(int i=0; i<length; i++){
            printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}
    
