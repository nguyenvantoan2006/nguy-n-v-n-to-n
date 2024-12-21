#include <stdio.h>

int main() {
    int numbers[5];
    int i, odd_sum = 0;

    printf("Nhap 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            odd_sum += numbers[i];
        }
    }

    printf("Tong cac so le la: %d\n", odd_sum);

    return 0;
}
