#include <stdio.h>

int main() {
    int n, i, j;
    printf("nhap so hang va so cot cua mang (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Phan tu? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int max = matrix[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
