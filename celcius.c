#include <stdio.h> 

  

int main() { 

    // Declare variables for Celsius and Fahrenheit 

    float celsius, fahrenheit; 

    // Prompt user for input 

    printf("Enter temperature in Celsius: "); 

    scanf("%f", &celsius); 

    // Convert Celsius to Fahrenheit using the formula 

    fahrenheit = (9.0 / 5.0) * celsius + 32.0; 

    // Display the result 

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit); 

    return 0; 

} 