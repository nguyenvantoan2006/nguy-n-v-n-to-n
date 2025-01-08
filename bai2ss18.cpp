#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap ten: ");
    scanf("%49s", student.name);
    getchar(); 
    printf("Nhap tuoi: ");
    scanf("%d", &student.age);
    getchar();

    printf("Nhap so dien thoai: ");
    scanf("%14s", student.phoneNumber);
    getchar(); 

    printf("\nThong tin sinh vien:\nTen: %s\nTuoi: %d\nSo dien thoai: %s\n", student.name, student.age, student.phoneNumber);

    return 0;
}
