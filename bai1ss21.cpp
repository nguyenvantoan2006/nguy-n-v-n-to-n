#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
};

struct Student students[MAX];
int count = 0;
const char* filename = "students.dat";

void readFromFile() {
    FILE *file = fopen(filename, "rb");
    if (file != NULL) {
        fread(&count, sizeof(int), 1, file);
        fread(students, sizeof(struct Student), count, file);
        fclose(file);
    }
}

void writeToFile() {
    FILE *file = fopen(filename, "wb");
    fwrite(&count, sizeof(int), 1, file);
    fwrite(students, sizeof(struct Student), count, file);
    fclose(file);
}

void printStudents() {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

void addStudent() {
    if (count < MAX) {
        printf("Enter ID: ");
        scanf("%d", &students[count].
