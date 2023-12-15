//The function prints a pattern of numbers in a triangular shape.
#include <stdio.h>

int main() {
    int rows = 4;  // Number of rows in the pattern
    int i, j;

    // Outer loop to control the number of rows
    do {
        // Inner loop to print the numbers in each row
        j = 1;
        do {
            printf("%d ", j);
            j++;
        } while (j <= rows);

        printf("\n");
        rows--;

    } while (rows >= 1);

    return 0;
}

