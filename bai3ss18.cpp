#include <stdio.h>
struct Students{
       char name[50];
       int age;
       char numberPhone[15];
};
int main(){
    struct Students student[5];
    for(int i=0; i<5; i++){
            printf("Nhap thong tin sinh vien thu %d:\n", i+1);
            printf("Nhap ten:");
            scanf("%s",student[i].name);
            getchar();
            printf("nhap tuoi:");
            scanf("%d",&student[i].age);
            getchar();
            printf("Nhap so dien thoai:");
            scanf("%s",student[i].numberPhone);
            getchar();
    }
     printf("\nThong tin sinh vien:\n");
     for(int i=0; i<5; i++){
         printf("Sinh vien thu %d\n",i+ 1);
         printf("Ten:%s\n",student[i].name);
         printf("Tuoi:%d\n",student[i].age);
         printf("So dien thoai %s\n",student[i].numberPhone);
     }
     return 0;
}            
    
