#include <stdio.h>

int main() {
    int num;

    // Nh?p s? nguyên
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiem tra la so chan hay le 
    if (num % 2 == 0) {
        printf("%d la so chan.\n", num);
    } else {
        printf("%d la so le.\n", num);
    }

    return 0;
}
