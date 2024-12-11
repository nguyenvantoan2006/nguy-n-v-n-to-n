#include<stdio.h>;
int main(){
	float a , h;
	printf(" nhap so canh la");     
   	scanf("%f",&a); 
	printf(" nhap chieu cao la");
	scanf("%f",&h);
	float dienTich = 0.5 * a * h;
	printf ("dien tich tam giac la: %f", dienTich);
	return 0;
}
