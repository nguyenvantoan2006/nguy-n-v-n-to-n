#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap so hang va so cot cua ma tran (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    printf("Cac phan tu tren duong cheo phu cua ma tran: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-i-1]);
        sum += matrix[i][n-i-1];
    }
    printf("\n");

    printf("Tong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}
