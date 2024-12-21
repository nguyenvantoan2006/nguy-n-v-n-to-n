#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,x1,x2;
	printf("Moi nhap vao so a: ");	scanf("%f", &a);
	printf("Moi nhap vao so b: ");	scanf("%f", &b);
	printf("Moi nhap vao so c: ");	scanf("%f", &c);
	
	float delta = b*b - 4*a*c;
	if(delta < 0)	printf("Phuong trinh vo nghiem");
	else if(delta == 0){
		x1=-b/2*a;
		printf("Phuong trinh co nghiem kep x1=x2= %f",x1);
	}
	else{
		x1 = (-b + sqrt(delta))/2*a, x2 = (-b - sqrt(delta))/2*a;
		printf("Ta co x1 = %f , x2 = %f",x1,x2);
	}
}
