#include <stdio.h> 

// Function to calculate the square of each element in a square matrix 

void printSquareMatrix(int matrix[][3], int size) { 

    printf("Original Matrix:\n"); 

    for (int i = 0; i < size; ++i) { 

        for (int j = 0; j < size; ++j) { 

            printf("%d\t", matrix[i][j]); 

        } 

        printf("\n"); 

    } 

    printf("\nSquared Matrix:\n"); 

    for (int i = 0; i < size; ++i) { 

        for (int j = 0; j < size; ++j) { 

            int square = matrix[i][j] * matrix[i][j]; 

            printf("%d\t", square); 

        } 

        printf("\n"); 

    } 

} 

int main() { 

    // Define and initialize a square matrix (3x3 in this example) 

    int matrix[3][3] = { 

        {1, 2, 3}, 

        {4, 5, 6}, 

        {7, 8, 9} 

    }; 

    // Get the size of the matrix 

    int size = sizeof(matrix) / sizeof(matrix[0]); 

    // Call the function to print the square of each element 

    printSquareMatrix(matrix, size); 

    return 0; 

} 