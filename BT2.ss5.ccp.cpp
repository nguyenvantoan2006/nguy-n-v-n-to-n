#include <stdio.h>

int main() {
    int beforeNumber = 42; 
    int userInput;

    printf("Nhap mot so tu ban phim (doan dung thi ket thuc chuong trinh):\n");

    // Vòng lap
    do {
        printf("Nhap so: ");
        scanf("%d", &userInput);

        if (userInput != beforeNumber) {
            printf("Sai! Hay thu lai.\n");
        }
    } while (userInput != beforeNumber); // Lap lai neu so nhap vao khac so cho truoc

    printf("Chinh xac! Ban da nhap dung so %d.\n", beforeNumber);

    return 0;
}
