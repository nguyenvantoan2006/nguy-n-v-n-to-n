#include <stdio.h>
int main() {
    int a = 10; 
    int *ptr=&a;
    printf("Gia tri cua a:%d\n",a);
    printf("Dia chi cua a:%p\n",(void*)&a);
    printf("gia tri cua a thong qua con tro:%d\n",*ptr);
    printf("Dia chi cua a thong qua con tro:%p\n",(void*)ptr);
    return 0;
}
    
