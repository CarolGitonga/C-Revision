#include <stdio.h> 

  

// Symbolic constant using #define 

#define MAX_SCORE 100 

  

int main() { 

    // Literal constants 

    int num1 = 10; 

    float pi = 3.14; 

    // Symbolic constant using const 

    const int MIN_SCORE = 0; 

    // Using symbolic constants in expressions 

    int maxAllowedScore = MAX_SCORE - 5; 

    // Display values 

    printf("Literal constant 1: %d\n", num1); 

    printf("Literal constant 2: %.2f\n", pi); 

    printf("Symbolic constant 1: %d\n", MIN_SCORE); 

    printf("Symbolic constant 2: %d\n", MAX_SCORE); 

    printf("Expression using symbolic constant: %d\n", maxAllowedScore); 

  

    return 0; 

} 