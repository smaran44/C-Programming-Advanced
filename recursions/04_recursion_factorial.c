#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n);

int main() {
    int n; // Variable to store the input number

    // Prompt the user to enter a positive integer
    printf("Enter n: ");
    scanf("%d", &n); // Read the input from the user

    // Check if the input is valid (non-negative)
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial is: %d\n", factorial(n));
    }

    return 0; // Indicate successful program termination
}

// Recursive function to calculate the factorial of a number
// Factorial of n (n!) is defined as:
// n! = n * (n-1) * (n-2) * ... * 1 for n > 0
// 0! = 1 (base case)
int factorial(int n) {
    // Base case: If n is 0, return 1
    // This stops the recursion from going indefinitely
    if (n == 0) {
        return 1;
    }

    // Recursive case: Calculate (n-1)!
    int factnm1 = factorial(n - 1);

    // Multiply the current number (n) with the factorial of (n-1)
    int factn = factnm1 * n;

    // Return the calculated factorial for the current number
    return factn;
}
