#include <stdio.h>

int main() {
    int num;

    // Nhap so nguyen 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // kiem tra so am hay duong 
    if (num > 0) {
        printf("%d l� so duong.\n", num);
    } else if (num < 0) {
        printf("%d l� so am.\n", num);
    } else {
        printf("%d l� so khong.\n", num);
    }

    return 0;
}
