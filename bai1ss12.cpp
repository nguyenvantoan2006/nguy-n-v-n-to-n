#include<stdio.h>
int add(int a, int b);
int main(){
    int num1 , num2, sum;
    printf("nhap vao so thu nhat:");
    scanf("%d",&num1);
    printf("nhap vao so thu hai:");
    scanf("%d", &num2);
    
    sum=add(num1 , num2);
    printf("tong cua %d va %d la: %d\n",num1,num2,sum);
    
    return 0;
}

int add(int a, int b){
    return a + b;
}
