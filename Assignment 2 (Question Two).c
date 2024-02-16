// Name: Mohamed Ibrahim Tuke
// Reg No: ENE212-0217/2020
// Class: ECE
// Date: 16/02/2024


#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);

        // Update terms for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
