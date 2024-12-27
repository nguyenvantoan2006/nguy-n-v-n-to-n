#include <stdio.h>

// Khai báo hàm factorial
int factorial(int n);

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    int sum = factorial(num);
    printf("Giai thua cua %d la: %d\n", num, sum);

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
