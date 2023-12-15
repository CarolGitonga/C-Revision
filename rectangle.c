#include <stdio.h> 

  

int main() { 

    // Step 1: Prompt user to enter the length of the rectangle 

    printf("Enter the length of the rectangle: "); 

     

    // Step 2: Read and store the length 

    double length; 

    scanf("%lf", &length); 

  

    // Step 3: Prompt user to enter the width of the rectangle 

    printf("Enter the width of the rectangle: "); 

     

    // Step 4: Read and store the width 

    double width; 

    scanf("%lf", &width); 

  

    // Step 5: Calculate the area of the rectangle 

    double area = length * width; 

  

    // Step 6: Calculate the perimeter of the rectangle 

    double perimeter = 2 * (length + width); 

  

    // Step 7: Display the calculated area and perimeter 

    printf("Area of the rectangle: %.2lf\n", area); 

    printf("Perimeter of the rectangle: %.2lf\n", perimeter); 

  

    // Step 8: End 

    return 0; 

} 