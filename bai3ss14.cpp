#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Hello, My love";
    int length=strlen(str);
    char reversed[100];
    for(int i=0; i<length; i++){
            reversed[i] = str[length - i - 1];
    }
    reversed[length]='\0';
    printf("Chuoi da khai bao %s\n",str);
    printf("Chuoi dao nguoc %s\n",reversed);
    
    return 0;
}
