#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap cac phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu cua mang tu cuoi ve dau la: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
