#include <stdio.h>
int main(){
	int n;	printf("Moi nhap vao so nguyen N: ");	scanf("%d",&n);
	if(n < 2)	printf("%d khong phai so nguyen to",n);
	else{
		for(int i=2;i*i<=n;++i){
			if(n%i == 0) n *=-1;	break;
		}
		if(n > 0)	printf("%d la so nguyen to",n);
		else	printf("%d khong phai so nguyen to",n*-1);
	}
}
