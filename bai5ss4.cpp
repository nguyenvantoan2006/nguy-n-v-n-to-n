#include <stdio.h>

int main() {
    int num1, num2, num3;

    // nhap 3 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("%d nam trong khoang %d và %d.\n", num3, num1, num2);
    } else {
        printf("%d khong nam torng] %d và %d.\n", num3, num1, num2);
    }

    return 0;
}
