#include <stdio.h> 

  

int main() { 

    // Example 1: Using ternary operator to find the maximum of two numbers 

    int num1 = 10, num2 = 20; 

    int max = (num1 > num2) ? num1 : num2; 

    printf("The maximum of %d and %d is: %d\n", num1, num2, max); 

    // Example 2: Checking if a number is even or odd using ternary operator 

    int num = 15; 

    const char *result = (num % 2 == 0) ? "Even" : "Odd"; 

    printf("%d is %s\n", num, result); 

    return 0; 

} 