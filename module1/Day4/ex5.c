#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Function to swap the fields of two structures
void swap(struct Person* p1, struct Person* p2) {
    struct Person temp; // Temporary structure variable

    // Swap the name field
    strcpy(temp.name, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, temp.name);

    // Swap the age field
    temp.age = p1->age;
    p1->age = p2->age;
    p2->age = temp.age;
}

int main() {
    // Create two structure variables
    struct Person person1, person2;

    // Input details for person1
    printf("Enter name for person1: ");
    scanf("%s", person1.name);
    printf("Enter age for person1: ");
    scanf("%d", &person1.age);

    // Input details for person2
    printf("Enter name for person2: ");
    scanf("%s", person2.name);
    printf("Enter age for person2: ");
    scanf("%d", &person2.age);

    // Print the initial details of the structures
    printf("\nInitial details:\n");
    printf("Person1: Name - %s, Age - %d\n", person1.name, person1.age);
    printf("Person2: Name - %s, Age - %d\n", person2.name, person2.age);

    // Swap the fields using pointers
    swap(&person1, &person2);

    // Print the swapped details of the structures
    printf("\nSwapped details:\n");
    printf("Person1: Name - %s, Age - %d\n", person1.name, person1.age);
    printf("Person2: Name - %s, Age - %d\n", person2.name, person2.age);

    return 0;
}
