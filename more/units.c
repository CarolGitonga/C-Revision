#include <stdio.h> 

int main() { 

    // Prompt user to input the number of units consumed 

    printf("Enter the number of units consumed: "); 

    // Read and store the input 

    int unitsConsumed; 

    scanf("%d", &unitsConsumed); 

    // Initialize cost per unit based on consumption range 

    double costPerUnit; 

    if (unitsConsumed > 700) { 

        costPerUnit = 4.5; 

    } else if (unitsConsumed >= 501 && unitsConsumed <= 700) { 

        costPerUnit = 3.5; 

    } else if (unitsConsumed >= 200 && unitsConsumed <= 500) { 

        costPerUnit = 2.5; 

    } else { 

        costPerUnit = 1.5; 

    } 

    // Calculate total cost 

    double totalCost = unitsConsumed * costPerUnit; 

    // Display the result 

    printf("Total cost for %d units: $%.2lf\n", unitsConsumed, totalCost); 

    return 0; 

} 