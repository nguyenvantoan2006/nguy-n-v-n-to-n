#include <stdio.h>

void updateArray(int *arr, int size, int newValue,int pos);
int main() {
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau:");
    for(int i=0; i<size; i++){
            printf("%d",arr[i]);
            }
    printf("\n");
    updateArray(arr, size,10,2);
    printf("Mang sau khi cap nhat:");
    for(int i=0; i<size; i++){
            printf("%d",arr[i]);
        }
        printf("\n");
        return 0;
}
void updateArray(int *arr,int size,int newValue,int pos){
     if(pos >= 0 && pos < size){
            arr[pos] = newValue;
            } else {
                   printf("Vi tri khong hop le:\n");
                   }
                   
}
