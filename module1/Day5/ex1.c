#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringAndInitializeStructArray(char* inputString, int arraySize, struct Student* studentArray) {
    char* token;
    int i = 0;
    
    token = strtok(inputString, " ");
    while (token != NULL && i < arraySize) {
        studentArray[i].rollno = atoi(token);
        
        token = strtok(NULL, " ");
        strcpy(studentArray[i].name, token);
        
        token = strtok(NULL, " ");
        studentArray[i].marks = atof(token);
        
        i++;
        token = strtok(NULL, " ");
    }
}

int main() {
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    
    // Allocate memory for the array of structures
    struct Student* studentArray = malloc(arraySize * sizeof(struct Student));
    
    char inputString[100];
    printf("Enter the input string: ");
    scanf(" %[^\n]", inputString);
    
    // Parse the input string and initialize the struct array
    parseStringAndInitializeStructArray(inputString, arraySize, studentArray);
    
    // Print the initialized struct array
    printf("Initialized struct array:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               studentArray[i].rollno, studentArray[i].name, studentArray[i].marks);
    }
    
    // Free the allocated memory
    free(studentArray);
    
    return 0;
}
