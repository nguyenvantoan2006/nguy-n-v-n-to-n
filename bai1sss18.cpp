#include <stdio.h>
#include <string.h>
struct student {
       char name[15];
       int age;
       char phoneNumber[12];
};
int main(){
    struct student sv;
    strcpy(sv.name,"Nguyen Van Toan");
    sv.age=19;
    strcpy(sv.phoneNumber,"123-456-7899");
    printf("Name:%s\n",sv.name);
    printf("age:%d\n",sv.age);
    printf("Phone Number:%s\n",sv.phoneNumber);
    return 0;
}
