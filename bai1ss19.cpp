#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void deleteStudent(int id, Student students[], int *currentLength) {
    int index = -1;
    for (int i = 0; i < *currentLength; ++i) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Khong tim thay sinh vien voi ID %d.\n", id);
        return;
    }

    for (int i = index; i < *currentLength - 1; ++i) {
        students[i] = students[i + 1];
    }

    (*currentLength)--;
}

void printStudents(const Student students[], int currentLength) {
    for (int i = 0; i < currentLength; ++i) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
    Student students[5] = {
        {1, "Alice", 20, "123-456-7890"},
        {2, "Bob", 21, "234-567-8901"},
        {3, "Charlie", 22, "345-678-9012"},
        {4, "David", 23, "456-789-0123"},
        {5, "Eve", 24, "567-890-1234"}
    };

    int currentLength = 5;

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);

    int idToDelete;
    printf("Nhap ID cua sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    deleteStudent(idToDelete, students, &currentLength);

    printf("Danh sach sinh vien sau khi xoa:\n");
    printStudents(students, currentLength);

    return 0;
}
