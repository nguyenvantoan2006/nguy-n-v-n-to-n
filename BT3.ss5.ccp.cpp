#include <stdio.h>

int main() {
    int n; // luu so nguoi dung nhap
    int sum = 0; // luu tong gia tri tang dan

    // Yeu cau nhap so nguyen duong
    do {
        printf("Nhap vao mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So nhap vao khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0); // Lap lai neu nguoi dung nhap so khong duong

    // Tinh tong tu 1 den n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong tat ca cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
