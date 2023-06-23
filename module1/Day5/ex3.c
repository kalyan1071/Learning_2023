#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Function to display all members of the array of structures
void displayMembers(struct Person members[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Member %d:\n", i + 1);
        printf("Name: %s\n", members[i].name);
        printf("Age: %d\n", members[i].age);
        printf("\n");
    }
}

int main() {
    // Create an array of structures
    struct Person members[] = {
        {"John", 25},
        {"Alice", 30},
        {"Bob", 35}
    };

    int size = sizeof(members) / sizeof(members[0]);

    // Call the function to display all members
    displayMembers(members, size);

    return 0;
}
