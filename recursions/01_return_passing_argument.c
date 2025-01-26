#include <stdio.h>

// Function prototype to calculate the square of a number
int calcSquare(int n); // Declares the function so it can be called in the main function
void squareTable(); // Declares the function so it can be called in the main function

int main() {
    int n; // Variable to store the input number

    // Prompt the user to enter a number
    printf("Enter n: ");
    scanf("%d", &n); // Read the input number from the user

    // Print the square of the input number
    printf("Square is: %d\n", calcSquare(n));

    // Print the square table for numbers from 1 to 10
    printf("\nSquare Table (1 to 10):\n");
    printf("-----------------------\n");
    
    squareTable(); // Call the squareTable function to print the square table

    return 0; // Indicate successful program termination
}

// Function to calculate the square of a number
// Input: Integer n
// Output: Square of the input integer
int calcSquare(int n) {
    return n * n; // Return the square of the number
}

void squareTable() {
    for (int i = 1; i <= 10; i++) {
        printf("%d squared is %d\n", i, calcSquare(i)); // Call the calcSquare function for each number
    }
}