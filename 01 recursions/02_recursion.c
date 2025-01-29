#include <stdio.h>

// Recursive function to print "Hello, World!" n times

void printHelloWorld(int n);

int main() {
    int n;

    // Prompt the user to enter the number of times to print
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);

    // Call the recursive function
    printHelloWorld(n);

    return 0;
}

void printHelloWorld(int n) {
    // Base case: If n reaches 0, stop the recursion
    if (n == 0) {
        return;
    }

    // Print "Hello, World!" once
    printf("Hello, World!\n");

    // Recursive call: Call the function with n-1
    printHelloWorld(n - 1);
}