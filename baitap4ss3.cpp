#include <stdio.h>

int main() {
    //Khai bai bien
    float toan, van, anh, tong, trungBinh;

    //Nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tinh tong diem va diem trung binh
    tong = toan + van + anh;
    trungBinh = tong / 3;

    // im ket qua
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}
