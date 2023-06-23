#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void sortArray(struct Student arr[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].marks < arr[j + 1].marks) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5] = {
        {"John", 85},
        {"Alice", 92},
        {"Bob", 78},
        {"Eva", 95},
        {"Mike", 88}
    };

    int i;

    // Before sorting
    printf("Before sorting:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    // Sort the array
    sortArray(students, 5);

    // After sorting
    printf("\nAfter sorting:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}
