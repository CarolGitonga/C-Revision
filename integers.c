//prompts the user to enter an integer, then calculates and displays the cubes of numbers from 1 to the given integer.
#include <stdio.h>

int main() {
    int n;

    // Read input from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Display the cubes of numbers from 1 to the given integer
    printf("Cubes of numbers from 1 to %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("Cube of %d = %d\n", i, cube);
    }

    return 0;
}
