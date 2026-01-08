#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    originalNumber = number;

    
    while (number != 0) {
        digit = number % 10;                   
        reversedNumber = reversedNumber * 10 + digit; 
        number = number / 10;                   
    }

    
    if (originalNumber == reversedNumber) {
        printf("The number %d is a palindrome.\n", originalNumber);
    } else {
        printf("The number %d is not a palindrome.\n", originalNumber);
    }

    return 0;
}