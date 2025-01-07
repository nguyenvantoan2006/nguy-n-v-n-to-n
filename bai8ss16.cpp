#include <stdio.h>
#include <string.h>
int main(){
    char inputString[100];
    char reverseString[100];
    char *ptrInput;
    char *ptrReverse;
    printf("Nhap vao mot chuoi:");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    ptrInput=inputString;
    ptrReverse= reverseString + strlen(inputString) - 1;
    while(*ptrInput != '\0'){
                    *ptrReverse=*ptrInput;
                    ptrInput++;
                    ptrReverse--;
    }
    reverseString[strlen(inputString)] = '\0';
    printf("Chuoi goc:%s\n",inputString);
    printf("Chuoi dao nguoc:%s\n",reverseString);
    return 0;
            
                    
                  
                    
                  
                    
                    
}
