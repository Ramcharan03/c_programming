#include <stdio.h>

int main() {
    int number, originalNumber, digit, digitSum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number >= 10000 && number <= 99999) {
       
        while (number > 0) {
            digit = number % 10;  
            digitSum += digit;   
            number /= 10;        
        }

        printf("Sum of digits in %d = %d\n", originalNumber, digitSum);
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}
