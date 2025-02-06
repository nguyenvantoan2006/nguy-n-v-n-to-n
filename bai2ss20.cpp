#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20], name[50];
    double purchasePrice, salePrice;
    int quantity;
} Product;

Product products[100];
int productCount = 0;
double revenue = 0.0;

void addProduct();
void displayProducts();
void importProduct();
void updateProductById();
void sortProductsByPrice(int ascending);
void searchProductByName();
void sellProduct();
void showRevenue();
void showMenu();

int main() {
    int choice;
    do {
        showMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: importProduct(); break;
            case 4: updateProductById(); break;
            case 5: sortProductsByPrice(1); break;
            case 6: searchProductByName(); break;
            case 7: sellProduct(); break;
            case 8: showRevenue(); break;
            case 9: printf("Thoat.\n"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 9);

    return 0;
}

void showMenu() {
    printf("\nMENU\n");
    printf("1. Nhap so luong va thong tin san pham.\n");
    printf("2. Hien thi danh sach san pham.\n");
    printf("3. Nhap san pham.\n");
    printf("4. Cap nhat thong tin san pham.\n");
    printf("5. Sap xep san pham theo gia (tang/giam).\n");
    printf("6. Tim kiem san pham.\n");
    printf("7. Ban san pham.\n");
    printf("8. Doanh thu hien tai.\n");
    printf("9. Thoat.\n");
}

void addProduct() {
    printf("Nhap so luong san pham: ");
    int n;
    scanf("%
