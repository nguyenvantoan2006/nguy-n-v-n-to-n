#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, newValue, index;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can sua (1 den %d): ", n);
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    if (index < 1 || index > n) {
        printf("Vi tri khong hop le!\n");
    } else {
        arr[index - 1] = newValue;
        printf("Mang sau khi sua:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
                   
