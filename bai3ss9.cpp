#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i,index;
    int currentLength;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    currentLength = n;

    printf("Nhap 1 vi tri can xoa(1 den%d): ", currentLength);
    scanf("%d", &index);

    if (index< 1 || index > currentLength) {
        printf("vi tri khong hop le!\n");
    } else {
        for (i = index - 1; i < currentLength - 1; i++) {
            arr[i] = arr[i + 1];
        }
        currentLength--; 

        printf("Mang sau khi xoa phan tu:\n");
        for (i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
