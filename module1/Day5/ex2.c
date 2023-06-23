#include <stdio.h>

#define MAX_SIZE 10

// Define the structure
typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

// Function to initialize the array of structures
void initializeEmployees(Employee employees[], int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        employees[i].id = 0;
        employees[i].name[0] = '\0';
        employees[i].salary = 0.0;
    }
}

int main() {
    Employee employees[MAX_SIZE];
    int i;
    
    initializeEmployees(employees, MAX_SIZE);
    
    // Print the initialized values
    for (i = 0; i < MAX_SIZE; i++) {
        printf("Employee %d: ID=%d, Name=%s, Salary=%.2f\n", i+1, employees[i].id, employees[i].name, employees[i].salary);
    }
    
    return 0;
}
