#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int arr[MAX_SIZE];
    int n = 0, choice, i, value, index, sum, max, min, count;

    while (1) {
        printf("============MENU================\n");
        printf("1. Nhap so phan tu can nhap va gia tri cua cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to va tính tong \n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("================================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Cac phan tu trong mang la: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                sum = 0;
                printf("Cac phan tu chan trong mang la: ");
                for (i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan la: %d\n", sum);
                break;
            case 4:
                if (n > 0) {
                    max = arr[0];
                    min = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat trong mang la: %d\n", max);
                    printf("Gia tri nho nhat trong mang la: %d\n", min);
                } else {
                    printf("Mang rong!\n");
                }
                break;
            case 5:
                sum = 0;
                printf("Cac phan tu la so nguyen trong mang la: ");
                for (i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu la so nguyen to la: %d\n", sum);
                break;
            case 6:
                printf("Nhap so can thong ke: ");
                scanf("%d", &value);
                count = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        count++;
                    }
                }
                printf("So lan xuat hien cua %d trong mang la: %d\n", value, count);
                break;
            case 7:
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (1 den %d): ", n + 1);
                scanf("%d", &index);
                if (index < 1 || index > n + 1) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (i = n; i >= index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index - 1] = value;
                    n++;
                    printf("mang sau khi them phan tu:\n");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le vui long chon lai.\n");
        }
    }

    return 0;
}
