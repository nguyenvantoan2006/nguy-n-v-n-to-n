#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    printf("Nhap vao mot chuoi:");
    gets(str);
    
    printf("chuoi vua nhap: %s\n",str);
    printf("Do dai cua chuoi:",strlen(str));
}
    return 0;
