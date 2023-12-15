//User inputs a valid integer between 0 and 20, and the program calculates and prints the factorial of the input.
#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;

    // Read input from the user
    printf("Enter an integer between 0 and 20: ");
    scanf("%d", &num);

    // Check if the input is within the valid range
    if (num < 0 || num > 20) {
        printf("Please enter a valid integer between 0 and 20.\n");
        return 1;  // Exit with an error code
    }

    // Call the factorial function and print the result
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;  // Exit successfully
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}
