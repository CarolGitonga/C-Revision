#include <stdio.h> 

  

int main() { 

    int x = 5, y = 5; 

  

    // Postfix increment 

    int resultPostfix = x++; 

    printf("Postfix Increment: result = %d, x = %d\n", resultPostfix, x); 

    // Prefix increment 

    int resultPrefix = ++y; 

    printf("Prefix Increment: result = %d, y = %d\n", resultPrefix, y); 

    // Postfix decrement 

    int resultPostfixDec = x--; 

    printf("Postfix Decrement: result = %d, x = %d\n", resultPostfixDec, x); 

    // Prefix decrement 

    int resultPrefixDec = --y; 

    printf("Prefix Decrement: result = %d, y = %d\n", resultPrefixDec, y); 

    return 0; 

} 