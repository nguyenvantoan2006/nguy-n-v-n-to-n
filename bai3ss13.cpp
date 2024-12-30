#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void printCorners(int rows, int cols, int matrix[rows][cols]) {
    printf("%d %d\n", matrix[0][0], matrix[0][cols-1]);
    printf("%d %d\n", matrix[rows-1][0], matrix[rows-1][cols-1]);
}


void printBorders(int rows, int cols, int matrix[rows][cols]) {
    for (int j = 0; j < cols; j++) printf("%d ", matrix[0][j]);
    for (int i = 1; i < rows - 1; i++) printf("%d %d ", matrix[i][0], matrix[i][cols-1]);
    for (int j = 0; j < cols; j++) printf("%d ", matrix[rows-1][j]);
    printf("\n");
}


void printDiagonals(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows && i < cols; i++) printf("%d ", matrix[i][i]);
    printf("\n");
    for (int i = 0; i < rows && i < cols; i++) printf("%d ", matrix[i][cols-i-1]);
    printf("\n");
}

void printPrimes(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPrime(matrix[i][j])) printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int rows, cols, choice;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputMatrix(rows, cols, matrix); break;
            case 2: printMatrix(rows, cols, matrix); break;
            case 3: printCorners(rows, cols, matrix); break;
            case 4: printBorders(rows, cols, matrix); break;
            case 5: printDiagonals(rows, cols, matrix); break;
            case 6: printPrimes(rows, cols, matrix); break;
            case 7: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}
