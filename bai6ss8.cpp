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
    printf("Cac phan tu tren duong cheo chinh cua ma tran la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");
    printf("Tong cac phan tu tren duong cheo chinh cua ma tran la: %d\n", sum);

    return 0;
}
