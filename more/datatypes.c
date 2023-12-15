#include <stdio.h> 

  

int main() { 

    // Integer type 

    int integerVar = 42; 

  

    // Floating-point types 

    float floatVar = 3.14f; 

    double doubleVar = 2.71828; 

  

    // Character type 

    char charVar = 'A'; 

  

    // Boolean type 

    _Bool boolVar = 1; 

  

    // Display values and sizes 

    printf("Integer: %d (Size: %lu bytes)\n", integerVar, sizeof(int)); 

    printf("Float: %.2f (Size: %lu bytes)\n", floatVar, sizeof(float)); 

    printf("Double: %.5lf (Size: %lu bytes)\n", doubleVar, sizeof(double)); 

    printf("Char: %c (Size: %lu bytes)\n", charVar, sizeof(char)); 

    printf("Bool: %d (Size: %lu bytes)\n", boolVar, sizeof(_Bool)); 

  

    return 0; 

} 