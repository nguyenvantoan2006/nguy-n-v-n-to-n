#include <stdio.h>
int timKiemPhanTu(int arr[],int n, int giaTri){
    for (int i=0; i<n;i++){
        if(arr[i]==giaTri){
                           return i;
                           }
        }
        return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int giaTri = 7;
    
    int index = timKiemPhanTu(arr,n,giaTri);
    if(index != -1){
             printf("Phan tu %d duoc tim thay tai vi tri %d\n",giaTri,index);
             } else {
                    printf("khong tim thay phan tu %d trong mang\n",giaTri);
                    }
                    return 0;
}
