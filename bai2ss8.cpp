#include <stdio.h>
int main() {
    int n, i, x, flag = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i + 1);
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("Phan tu ko ton tai trong mang.\n");
    }

    return 0;
}
