#include <stdio.h> 

int main() { 

    int x = 5, y = 10; 

    // Logical AND 

    if (x > 0 && y > 0) { 

        printf("Both x and y are greater than 0\n"); 

    } else { 

        printf("At least one of x and y is not greater than 0\n"); 

    } 

    // Logical OR 

    if (x > 0 || y > 0) { 

        printf("At least one of x and y is greater than 0\n"); 

    } else { 

        printf("Neither x nor y is greater than 0\n"); 

    } 

    // Logical NOT 

    if (!(x > 0)) { 

        printf("x is not greater than 0\n"); 

    } else { 

        printf("x is greater than 0\n"); 

    } 

    return 0; 

} 