// Name: Mohamed Ibrahim Tuke
// Reg No: ENE212-0217/2020
// Class: ECE
// Date: 16/02/2024

#include <stdio.h>

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to subtract two numbers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to multiply two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to divide two numbers (returns a float)
float divide(int num1, int num2) {
    return (float)num1 / num2;
}

// Function to check if a number is odd or even
void checkOddEven(int number) {
    if (number % 2 == 0) {
        printf("\n%d is Even Number.\n", number);
    } else {
        printf("\n%d is Odd Number.\n", number);
    }
}

// Function to compare two numbers
void compareNumbers(int num1, int num2) {
    if (num1 > num2) {
        printf("\n%d is greater than %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("\n%d is greater than %d.\n", num2, num1);
    } else {
        printf("\nBoth numbers are equal.\n");
    }
}

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    // Perform arithmetic operations using functions
    int sum = add(num1, num2);
    int difference = subtract(num1, num2);
    int product = multiply(num1, num2);
    float quotient = divide(num1, num2);

    // Display results
    printf("Sum = %d\n", sum);
    printf("\nDifference = %d\n", difference);
    printf("\nMultiplication = %d\n", product);
    printf("\nDivision = %.2f\n", quotient);

    // Check if numbers are odd or even
    checkOddEven(num1);
    checkOddEven(num2);

    // Compare and state which number is greater
    compareNumbers(num1, num2);

    return 0;
}
