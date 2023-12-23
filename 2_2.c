#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number >= 10000 && number <= 99999) {
        while (number > 0) {
            int digit = number % 10;  
            reversedNumber = reversedNumber * 10 + digit;  
            number /= 10;  
        }

        printf("Reverse of %d = %d\n", originalNumber, reversedNumber);
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}
