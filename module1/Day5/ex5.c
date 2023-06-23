#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    // Add more fields as needed
} Student;

Student students[MAX_STUDENTS]; // Array of structures

int searchStudentByName(const char* name, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Found the student at index i
        }
    }
    return -1; // Student not found
}

int main() {
    // Example usage
    int numStudents = 3;
    strcpy(students[0].name, "Alice");
    students[0].age = 20;
    strcpy(students[1].name, "Bob");
    students[1].age = 21;
    strcpy(students[2].name, "Charlie");
    students[2].age = 22;

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove trailing newline character

    int index = searchStudentByName(searchName, numStudents);
    if (index != -1) {
        printf("Student found!\n");
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
