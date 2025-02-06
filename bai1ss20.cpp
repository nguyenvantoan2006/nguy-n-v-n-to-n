#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20], name[50], author[50], category[30];
    double price;
} Book;

Book books[100];
int bookCount = 0;

void addBook();
void displayBooks();
void insertBookAt();
void deleteBookById();
void updateBookById();
void sortBooksByPrice(int ascending);
void searchBookByName();
void showMenu();

int main() {
    int choice;
    do {
        showMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: insertBookAt(); break;
            case 4: deleteBookById(); break;
            case 5: updateBookById(); break;
            case 6: sortBooksByPrice(1); break;
            case 7: searchBookByName(); break;
            case 8: printf("Thoat.\n"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

void showMenu() {
    printf("\nMENU\n");
    printf("1. Nhap so luong va thong tin sach.\n");
    printf("2. Hien thi thong tin sach.\n");
    printf("3. Them sach vao vi tri.\n");
    printf("4. Xoa sach theo ma sach.\n");
    printf("5. Cap nhat thong tin sach theo ma sach.\n");
    printf("6. Sap xep sach theo gia (tang/giam).\n");
    printf("7. Tim kiem sach theo ten sach.\n");
    printf("8. Thoat.\n");
}

void addBook() {
    printf("Nhap so luong sach: ");
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; ++i) {
        printf("Nhap thong tin sach thu %d\n", i + 1);
        printf("Ma sach: "); fgets(books[bookCount].id, 20, stdin); books[bookCount].id[strcspn(books[bookCount].id, "\n")] = 0;
        printf("Ten sach: "); fgets(books[bookCount].name, 50, stdin); books[bookCount].name[strcspn(books[bookCount].name, "\n")] = 0;
        printf("Tac gia: "); fgets(books[bookCount].author, 50, stdin); books[bookCount].author[strcspn(books[bookCount].author, "\n")] = 0;
        printf("Gia tien: "); scanf("%lf", &books[bookCount].price); getchar();
        printf("The loai: "); fgets(books[bookCount].category, 30, stdin); books[bookCount].category[strcspn(books[bookCount].category, "\n")] = 0;
        bookCount++;
    }
}

void displayBooks() {
    for (int i = 0; i < bookCount; ++i) {
        printf("\nSach thu %d\n", i + 1);
        printf("Ma sach: %s\nTen sach: %s\nTac gia: %s\nGia tien: %.2lf\nThe loai: %s\n", books[i].id, books[i].name, books[i].author, books[i].price, books[i].category);
    }
}

void insertBookAt() {
    if (bookCount >= 100) return;
    int pos;
    printf("Nhap vi tri muon them sach: "); scanf("%d", &pos); getchar();
    if (pos < 1 || pos > bookCount + 1) return;
    for (int i = bookCount; i >= pos; --i) books[i] = books[i - 1];
    printf("Nhap thong tin sach:\n");
    printf("Ma sach: "); fgets(books
