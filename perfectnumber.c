#include <stdio.h>

int isPerfectNumber(int num);

int main() {
    int number;

    // Read input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is a perfect number
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}


// Function to check if a number is a perfect number
int isPerfectNumber(int num) {
    int sum = 0;

    // Check for positive number
    if (num <= 0) {
        return 0;
    }

    // Find the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the original number
    return (sum == num);
}