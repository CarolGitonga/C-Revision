#include <stdio.h> 

// Function to check if a number is prime 

int isPrime(int num) { 

    if (num <= 1) { 

        return 0; // Not a prime number 

    } 

    for (int i = 2; i * i <= num; i++) { 

        if (num % i == 0) { 

            return 0; // Not a prime number 

        } 

    } 

    return 1; // Prime number 

}  

int main() { 

    printf("Prime numbers between 1 and 100 are:\n"); 

    // Loop through numbers from 1 to 100 and print prime numbers 

    for (int i = 1; i <= 100; i++) { 

        if (isPrime(i)) { 

            printf("%d ", i); 

        } 

    } 

    printf("\n"); 

    return 0; 

} 