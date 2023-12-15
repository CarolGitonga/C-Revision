#include <stdio.h> 

// Function to find the sum of digits of a number 

int sumOfDigits(int number) { 

    int sum = 0; 

    // Iterate through each digit using modulus and division 

    while (number > 0) { 

        // Extract the last digit using modulus 

        int digit = number % 10; 

        // Add the digit to the sum 

        sum += digit; 

        // Remove the last digit using integer division 

        number /= 10; 

    } 

    return sum; 

} 

int main() { 

    // Declare and initialize a number 

    int myNumber; 

    // Prompt the user to enter a number 

    printf("Enter a number: "); 

    scanf("%d", &myNumber); 

    // Calculate the sum of digits using the sumOfDigits function 

    int result = sumOfDigits(myNumber); 

    // Display the result 

    printf("Sum of digits: %d\n", result); 

    return 0; 

} 