#include<stdio.h>
int main(){
	int n ,sum=0;
	
	for (n=1 ; n<=5 ; n++){
	printf ("nhap so thu %d",n);
	scanf("%d",&n);
	
	if(n%2!=0){
	 sum +=n;
}
}
printf(" tong cac so le la %d",sum);
return 0;
	}
