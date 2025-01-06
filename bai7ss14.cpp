#include <stdio.h>
int main() {
    char str[]="Hello my gmail is test123@gmail.com";
    int chuCai =0, chuSo =0, kyTuDacBiet =0;
    int i=0;
    while (str[i]!= '0') {
          if(str[i] >= 65 && str[i]<=90 || str[i]>=97 && str[i]<=122) {
          chuCai++;
          } else if(str[i] >=48 && str[i] <=57) {
          chuSo++;
          } else {
      
          kyTuDacBiet++;
          }
          i++;
    }
          printf("So ky tu chu cai:%d\n",chuCai);
          printf("So ky tu chu so:%d\n",chuSo);
          printf("So ky tu dac biet:%d\n",kyTuDacBiet);
          return 0;
}

