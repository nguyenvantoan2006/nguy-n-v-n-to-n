#include <stdio.h>
struct Students{
       int id;
       char name[50];
       int age;
       char numberPhone[15];
};
int main(){
    struct Students Student[50];
    int numStudent = 5;
    for(int i=0; i<numStudent; i++){
            Student[i].id = i + 1;
            printf("Nhap thong tin sinh vien thu %d:\n", Student[i].id);
            printf("Nhap ten:");
            scanf("%s",Student[i].name);
            getchar();
            printf("nhap tuoi:");
            scanf("%d",&Student[i].age);
            getchar();
            printf("Nhap so dien thoai:");
            scanf("%s",Student[i].numberPhone);
            getchar();
    }
     printf("\nThong tin sinh vien:\n");
     for(int i=0; i<numStudent; i++){
         printf("Sinh vien thu %d\n",i+ 1);
         printf("Ten:%s\n",Student[i].name);
         printf("Tuoi:%d\n",Student[i].age);
         printf("So dien thoai %s\n",Student[i].numberPhone);
     }
     return 0;
}            
