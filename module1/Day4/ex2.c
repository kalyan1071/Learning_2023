#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number from the user
Complex readComplexNumber() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}

// Function to write a complex number to the console
void writeComplexNumber(Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

// Function to add two complex numbers
Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplexNumbers(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

int main() {
    Complex num1, num2, sum, product;
    
    // Read the first complex number
    printf("Enter the first complex number:\n");
    num1 = readComplexNumber();
    
    // Read the second complex number
    printf("Enter the second complex number:\n");
    num2 = readComplexNumber();
    
    // Add the complex numbers
    sum = addComplexNumbers(num1, num2);
    
    // Multiply the complex numbers
    product = multiplyComplexNumbers(num1, num2);
    
    // Write the complex numbers and the results
    printf("\n");
    writeComplexNumber(num1);
    writeComplexNumber(num2);
    printf("Sum: ");
    writeComplexNumber(sum);
    printf("Product: ");
    writeComplexNumber(product);
    
    return 0;
}
