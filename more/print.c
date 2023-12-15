#include <stdio.h> 

#include <string.h> 

  

// Function to reverse a string using pointers 

void reverseString(char *str) { 

    // Calculate the length of the string 

    int length = strlen(str); 

  

    // Pointers to the beginning and end of the string 

    char *start = str; 

    char *end = str + length - 1; 

  

    // Swap characters using pointers until the pointers meet in the middle 

    while (start < end) { 

        // Swap characters at the start and end pointers 

        char temp = *start; 

        *start = *end; 

        *end = temp; 

  

        // Move the pointers towards the middle 

        ++start; 

        --end; 

    } 

} 

  

int main() { 

    // Declare and initialize a string 

    char myString[] = "Hello, World!"; 

  

    // Display the original string 

    printf("Original String: %s\n", myString); 

    // Reverse the string using the reverseString function 

    reverseString(myString); 

    // Display the reversed string 

    printf("Reversed String: %s\n", myString); 

    return 0; 

} 