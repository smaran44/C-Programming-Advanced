// Accessing an Array in C using function parameters
#include <stdio.h>  // Including the standard input-output library for input and output functions

// Function prototypes (declarations)
// `printNumbers` takes a pointer to an integer (`int *arr`) and an integer `n` (size of the array)
// `_printNumbers` takes an array (`int arr[]`) and an integer `n`
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);

int main() {
    int n;  // Variable to store the size of the array

    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an integer array with the size provided by the user
    int arr[n];

    // Input loop to populate the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);  // Taking input for each element of the array
    }

    // Function call to `printNumbers` with the user-provided array and its size
    printf("\nOutput using printNumbers:\n");
    printNumbers(arr, n);  // Passing the array as a pointer (by reference)

    // Function call to `_printNumbers` with the same array and size
    printf("\nOutput using _printNumbers:\n");
    _printNumbers(arr, n);  // Passing the array (interpreted as a pointer)

    return 0;  // Indicating that the program executed successfully
}

// Function definition for `printNumbers`
// This function prints the index and value of each element in the array
void printNumbers(int *arr, int n) {
    // Looping through the array using the pointer `arr`
    for (int i = 0; i < n; i++) {
        // Printing the index `i` and the value at index `i` (accessed as `arr[i]`)
        printf("%d : %d\n", i, arr[i]);
    }
}

// Function definition for `_printNumbers`
// This function does the same as `printNumbers` but uses the array notation in the parameter
void _printNumbers(int arr[], int n) {
    // Looping through the array using array notation
    for (int i = 0; i < n; i++) {
        // Printing the index `i` and the value at index `i`
        printf("%d : %d\n", i, arr[i]);
    }
}

