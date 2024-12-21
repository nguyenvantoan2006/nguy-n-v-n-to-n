#include <stdio.h>
int main(){
	int n;
	printf("Moi ban nhap vao mot so nguyen bat ki: ");	scanf("%d", &n);
	printf("Day la tat ca cac uoc cua so ban da nhap: ");
	for(int i=1;i<=n;++i){
		if(n % i == 0)	printf("%d ",i);
	}
}
