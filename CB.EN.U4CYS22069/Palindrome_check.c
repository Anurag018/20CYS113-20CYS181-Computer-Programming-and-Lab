#include <stdio.h>

int isPalindrome(int number) {
    int reversedNumber = 0, originalNumber = number;

    // Reverse the number
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber) {
        return 1; // Palindrome
    } else {
        return 0; // Not a Palindrome
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

