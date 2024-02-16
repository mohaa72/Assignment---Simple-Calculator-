#include <stdio.h>

// Name: Mohamed Ibrahim Tuke
// Reg No: ENE212-0217/2020
// Class: ECE
// Date: 16/02/2024

int main(){

    int num1;
    int num2;
    int sum;
    int difference;
    int Multiplication;
    float division;

// Inputs from the user
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

// Perform arithmetic operations 
    sum=num1+num2;
    difference=num1-num2;
    Multiplication=num1*num2;
    division=num1/(float)num2;

// Display results
    printf("Addition result is: %d \n", sum);
    printf("\nSubtraction result is: %d \n", difference);
    printf("\nMultiplication result is: %d\n", Multiplication);
    printf("\nDivision result is: %.2f\n", division);

// Check if numbers are odd or even
    printf("\nFirst number is %s.\n", (num1 % 2 == 0) ? "even" : "odd");
    printf("\nSecond number is %s.\n", (num2 % 2 == 0) ? "even" : "odd");

// Compare and state which number is greater   
    if (num1 > num2) {
        printf("\nFirst number (%d) is greater than the second number (%d).\n", num1, num2);
    } else if (num1 < num2) {
        printf("\nSecond number (%d)) is greater than the first number (%d).\n", num2, num1);
    } else {
        printf("\nBoth numbers are equal.\n");
    }



    printf("\nTherefore, The Summation, Difference Multiplication and Division results are %d; %d; %d; %.2f respectively", sum, difference, Multiplication, division);

    return 0;

}
