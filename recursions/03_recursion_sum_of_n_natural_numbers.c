#include <stdio.h>

// Function to calculate the sum of the first n natural numbers using recursion

int sumOfNaturalNumbers(int n);

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number to calculate the sum of the first n natural numbers: ");
    scanf("%d", &n);

    // Call the recursive function and print the result
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

int sumOfNaturalNumbers(int n) {
    // Base case: The sum of the first 0 numbers is 0
    if (n == 0) {
        return 0; // Stop the recursion and return 0
    }

    // Recursive case: Sum of n is n + sum of the first (n-1) numbers
     int sumnm1 = sumOfNaturalNumbers(n - 1);
     return sumnm1 + n;
}