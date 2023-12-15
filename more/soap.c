#include <stdio.h> 

  

// Define the product structure 

struct product { 

    float price; 

    int quantity; 

}; 

  

int main() { 

    // Declare and initialize instances of the product structure 

    struct product soap = {2.5, 10};  // Price: 2.5, Quantity: 10 

    struct product salt = {1.0, 5};    // Price: 1.0, Quantity: 5 

    // Display information about the products 

    printf("Soap: Price=%.2f, Quantity=%d\n", soap.price, soap.quantity); 

    printf("Salt: Price=%.2f, Quantity=%d\n", salt.price, salt.quantity); 

    return 0; 

} 