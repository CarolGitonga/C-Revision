#include <stdio.h> 

  

int main() { 

    // Declare variables 

    int originalNumber, reversedNumber = 0, remainder; 

  

    // Prompt the user to enter a number 

    printf("Enter a number: "); 

    scanf("%d", &originalNumber); 

    // Reverse the digits of the number 

    while (originalNumber != 0) { 

        remainder = originalNumber % 10; 

        reversedNumber = reversedNumber * 10 + remainder; 

        originalNumber /= 10; 

    } 

    // Display the reversed number 

    printf("Reversed number: %d\n", reversedNumber); 

    return 0; 

} 