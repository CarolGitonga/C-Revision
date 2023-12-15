//User inputs two positive integers, and the program calculates and displays the result.
#include <stdio.h>

int main() {
    int num1, num2, result;

    while (1) { // Infinite loop
        // Read input from the user
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        // Check for termination condition (negative numbers)
        if (num1 < 0 || num2 < 0) {
            printf("Program terminated. Negative numbers are not allowed.\n");
            break; // Exit the loop and terminate the program
        }

        // Check for the condition where one of the integers is zero
        if (num1 == 0 || num2 == 0) {
            printf("Result will not be displayed, but the program will continue.\n");
            continue; // Skip the rest of the loop and continue to the next iteration
        }

        // Calculate and display the result
        result = num1 / num2;
        printf("Result: %d\n", result);
    }

    return 0;
}
