#include <stdio.h> 

// Function to find the largest element in an array 

int findLargestElement(int arr[], int size) { 

    // Initialize the largest element with the first element of the array 

    int largest = arr[0]; 

  

    // Iterate through the array to find the largest element 

    for (int i = 1; i < size; ++i) { 

        if (arr[i] > largest) { 

            largest = arr[i]; 

        } 

    } 

  

    // Return the largest element 

    return largest; 

} 

int main() { 

    // Declare and initialize an array 

    int arr[] = {12, 45, 78, 23, 56, 89, 34}; 

    // Calculate the size of the array 

    int size = sizeof(arr) / sizeof(arr[0]); 

    // Find the largest element in the array 

    int largestElement = findLargestElement(arr, size); 

    // Display the result 

    printf("The largest element in the array is: %d\n", largestElement); 

    return 0; 

} 