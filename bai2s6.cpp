#include <stdio.h>
int main(){
	int a,b,c,d,e,chan=0,le=0;
	printf("Moi nhap vao so nguyen thu 1 ");	scanf("%d", &a);
	if(a%2==0)	chan++;	else le++;
	
	printf("Moi nhap vao so nguyen thu 2 ");	scanf("%d", &b);
	if(b%2==0)	chan++;	else le++;
	
	printf("Moi nhap vao so nguyen thu 3 ");	scanf("%d", &c);
	if(c%2==0)	chan++;	else le++;
	
	printf("Moi nhap vao so nguyen thu 4 ");	scanf("%d", &d);
	if(d%2==0)	chan++;	else le++;
	
	printf("Moi nhap vao so nguyen thu 5 ");	scanf("%d", &e);
	if(e%2==0)	chan++;	else le++;
	
	printf("Tong so chan la: %d\nTong so le la: %d",chan,le);
}
