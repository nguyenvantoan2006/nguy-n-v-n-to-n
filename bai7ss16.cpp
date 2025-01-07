#include <stdio.h>
void sortArray(int arr[],int n);
int main(){
    int arr[] = {2,1,5,8,9,7,6};
    int n=sizeof(arr)/sizeof arr[0];
    sortArray(arr,n);
    printf("mang sau khi duoc sap xep:");
    for(int i=0; i<n; i++){
            printf("%d",arr[i]);
            }
            printf("\n");
            return 0;
}
void sortArray(int arr[],int n){
     for(int i=0; i<n-1; i++){
             for(int j=0; j< n-i-1; i++){
                     if(arr[j]>arr[j+1]);
                     int temp = arr[j];
                     arr[j]=arr[j+1];
                     arr[j+1]=temp;
                     }
              }
}
             
                     
                     
