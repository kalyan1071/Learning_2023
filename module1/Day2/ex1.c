#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int number1, number2, number3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    int greatest = findGreatest(number1, number2, number3);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
