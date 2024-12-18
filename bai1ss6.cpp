#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nÐo dai cua mang la: %d\n", n);

    return 0;
}
