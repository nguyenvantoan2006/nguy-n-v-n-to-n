#include <stdio.h>

int main() {
    int num;

    // Nhap so nguyen 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // kiem tra so am hay duong 
    if (num > 0) {
        printf("%d là so duong.\n", num);
    } else if (num < 0) {
        printf("%d là so am.\n", num);
    } else {
        printf("%d là so khong.\n", num);
    }

    return 0;
}
