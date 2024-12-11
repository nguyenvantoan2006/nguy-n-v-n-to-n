#include<stdio.h>
int main(){
	const float Pi = 3.14;
	float r , chuVi,dienTich;
 printf("ban kinh hinh tron la ");
scanf("%f",&r);
 	chuVi = 2 * Pi * r;
	printf("Chu vi hinh tron la %2f\n",chuVi);
	dienTich = r * r * Pi;
	printf("S  hinhtron la %2f\n",dienTich);
	return 0;
}
