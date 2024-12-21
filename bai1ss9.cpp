#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, newValue, position;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri muon them\n");
    scanf("%d", &newValue);
    printf("Nhap vi tri muon them(1 d?n %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Vi tri khong hop le");
    } else {
        for (i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = newValue;
        n++; 

        printf("Mang sau khi them phan tu:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
