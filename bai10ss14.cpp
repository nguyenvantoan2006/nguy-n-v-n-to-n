#include <stdio.h>
#include <string.h>
int main(){
	char str[]="bcdac";
	int count[256]={0};
	
	for(int i=0;i<strlen(str);i++){
		count[str[i]]++;
	}
	
	for(int i=0;i<strlen(str);i++){
		if(count[str[i]] != 0){
			printf("%c: %d\n",str[i],count[str[i]]);
			count[str[i]]=0;
		}
	}
}
