#include <stdio.h>  
#include <string.h>  

struct SinhVien {  
    int stt;  
    int tuoi;  
    char hoTen[50];  
    char soDienThoai[11];  
    char email[50];  
};  

int main() {  
    struct SinhVien danhSachSinhVien[] = {  
        {1, 19, "Mduc", "12311241", "aad@rikkeacademy.com"},  
        {2, 21, "mewpanawut", "1234567890", "trttr@rikkeacademy.com"},  
        {3, 18, "brightvachirawit", "0909488443", "sdfgsdf@rikkeacademy.com"},  
        {4, 20, "daoupoffload", "0101010101", "abc@gmail.com"},  
    };  

    int soLuongSinhVien = sizeof(danhSachSinhVien) / sizeof(danhSachSinhVien[0]);  

    printf("\t\t\t\tDANH SACH SINH VIEN\n");  
    printf("STT  |  Ho ten\t\t|\tTuoi |  So dien thoai   |\t         Email\n");  
    printf("--------------------------------------------------------------------------------------\n");
   

    for (int i = 0; i < soLuongSinhVien; i++) {  
        printf("%-4d|\t%-16s|\t%-5d|\t%-15s|\t%s\n--------------------------------------------------------------------------------------\n",  
               danhSachSinhVien[i].stt,  
               danhSachSinhVien[i].hoTen,  
               danhSachSinhVien[i].tuoi,  
               danhSachSinhVien[i].soDienThoai,  
               danhSachSinhVien[i].email);  
    }  

    return 0;  
}
