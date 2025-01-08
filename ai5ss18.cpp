#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0987654321"},
        {3, "Le Van C", 22, "0112233445"},
        {4, "Pham Thi D", 23, "0223344556"},
        {5, "Hoang Van E", 24, "0334455667"}
    };
    int numStudents = 5;

    int id;
    printf("Nhap id cua sinh vien can sua: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Nhap ten moi: ");
            scanf("%s", students[i].name);
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi id %d\n", id);
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Sinh vien thu %d:\n", students[i].id);
        printf("Tun: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
