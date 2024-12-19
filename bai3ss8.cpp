#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Ma tran vuong %d x %d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
