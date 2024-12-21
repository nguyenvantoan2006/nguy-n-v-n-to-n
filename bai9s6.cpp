#include <stdio.h>
int is_Armstrong(int n){
	int tmp = n,sum=0;
	while(n){
		int x = n%10;
		sum += x*x*x;
		n/=10;
	}
	return (sum == tmp);
}
int main(){
	printf("Sau day la so Armstrong hang tram: ");
	for(int i=100;i<1000;i++){
		if(is_Armstrong(i))	printf("%d ",i);
	}
}
