#include <stdio.h>
int main() {
  int arr[5],i,count=0;
  printf("nhap cac phan tu cua mang\n");
  for(i=0 ;i<5 ;i++); {
    printf("phan tu thu %d",i+1);
    scanf("%d",&arr[i]);
  }
  printf("cac phan tu la so chan trong mang la\n");
  for(i=0 ;i<5 ;i++) {
    if(arr[i]%2==0) {
      printf("%d",arr[i]);
      count++;
    }
  }
  if(count=0) {
    printf("mang khong co so chan");
  }
  printf("\n");
  return 0;
}
