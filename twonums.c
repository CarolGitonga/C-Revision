#include <stdio.h> 

  

int main() { 

    // Step 2: Input two numbers A and B 

    int A, B, result; 

  

    printf("Enter the value of A: "); 

    scanf("%d", &A); 

  

    printf("Enter the value of B: "); 

    scanf("%d", &B); 

  

    // Step 3 and 4: Perform addition or subtraction based on the condition 

    if (A > B) { 

        // 3.1: Set result = A + B 
        result = A + B; 

    } else { 

        // 4.1: Set result = B - A 

        result = B - A; 

    } 

  

    // Step 5: Output the result 

    printf("The result is: %d\n", result); 

  

    // Step 6: End 

    return 0; 

} 