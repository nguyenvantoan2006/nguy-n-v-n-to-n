#include <stdio.h>
void sum (int *a, int *b,int *result){
         *result = *a + *b;
}
int main() {
    int x = 7;
    int y = 9;
    int result;
    sum(&x, &y, &result);
    printf("Tong cua %d va %d la: %d\n",x,y,result);
    return 0;
}
    
