#include <stdio.h> 

  

// Function to find the greatest common divisor (GCD) of two numbers 

int gcd(int a, int b) { 

    if (b == 0) { 

        return a; 

    } else { 

        return gcd(b, a % b); 

    } 

} 

  

// Function to add two fractions and simplify the result 

void addFractions(int num1, int den1, int num2, int den2, int *resultNum, int *resultDen) { 

    // Calculate the common denominator 

    int commonDenominator = den1 * den2; 

  

    // Calculate the numerators for the common denominator 

    int newNum1 = num1 * den2; 

    int newNum2 = num2 * den1; 

  

    // Calculate the sum of numerators 

    *resultNum = newNum1 + newNum2; 

  

    // Calculate the result denominator 

    *resultDen = commonDenominator; 

  

    // Simplify the result by finding the GCD and dividing both numerator and denominator 

    int commonFactor = gcd(*resultNum, *resultDen); 

    *resultNum /= commonFactor; 

    *resultDen /= commonFactor; 

} 

  

int main() { 

    int num1, den1, num2, den2, resultNum, resultDen; 

  

    // Input for Fraction 1 

    printf("Enter numerator and denominator for Fraction 1 (separated by a space): "); 

    scanf("%d %d", &num1, &den1); 

  

    // Input for Fraction 2 

    printf("Enter numerator and denominator for Fraction 2 (separated by a space): "); 

    scanf("%d %d", &num2, &den2); 

  

    // Add the fractions 

    addFractions(num1, den1, num2, den2, &resultNum, &resultDen); 

  

    // Display the result 

    printf("Result: %d/%d\n", resultNum, resultDen); 

  

    return 0; 

} 