#include <stdio.h>

int main() {
  // Declare variables
  int x, y, p, s;

  // Read the values of x and y
  printf("Enter the value of x: ");
  scanf("%d", &x);

  printf("Enter the value of y: ");
  scanf("%d", &y);

  // Calculate p and s
  p = x * y;
  s = x + y;

  // Calculate and print the final value
  int result = s * s + p * (s - x) * (p + y);
  printf("The final value is: %d\n", result);

  return 0;
}