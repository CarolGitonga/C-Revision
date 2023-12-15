#include <stdio.h> 

  

int main() { 

    int N; 

    // Prompt the user to enter the value of N 

    printf("Enter the value of N: "); 

    scanf("%d", &N); 

    if (N <= 0) { 

        printf("Invalid input. N should be a positive integer.\n"); 

        return 1; // Return an error code 

    } 

    int number; 

    int smallest, largest; 

    // Loop to read N numbers 

    for (int i = 1; i <= N; ++i) { 

        printf("Enter number %d: ", i); 

        scanf("%d", &number); 

  

        // If it's the first iteration, initialize smallest and largest 

        if (i == 1) { 

            smallest = largest = number; 

        } else { 

            // Update smallest and largest as needed 

            if (number < smallest) { 

                smallest = number; 

            } 

            if (number > largest) { 

                largest = number; 

            } 

        } 

    } 

    // Print the smallest and largest numbers 

    printf("Smallest Number: %d\n", smallest); 

    printf("Largest Number: %d\n", largest); 

    return 0; 

} 