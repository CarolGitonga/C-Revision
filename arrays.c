//The function initializes an array of temperatures and displays them.
#include <stdio.h> 

int main() { 

    // Declaration and initialization of an array 

    int temperatures[7] = {75, 78, 82, 80, 85, 79, 72}; 

    // Access and display elements of the array 

    printf("Temperature for each day of the week:\n"); 

    for (int i = 0; i < 7; i++) { 

        printf("Day %d: %d°F\n", i + 1, temperatures[i]); 

    } 

    // Calculate the average temperature 

    int sum = 0; 

    for (int i = 0; i < 7; i++) { 

        sum += temperatures[i]; 

    } 

    float average = (float)sum / 7.0; 

    printf("Average temperature for the week: %.2f°F\n", average);  

    return 0; 

} 