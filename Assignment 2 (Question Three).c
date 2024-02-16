// Name: Mohamed Ibrahim Tuke
// Reg No: ENE212-0217/2020
// Class: ECE
// Date: 16/02/2024

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;
    
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    return 0;
}
