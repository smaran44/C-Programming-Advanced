#include <stdio.h>
#include <stdlib.h>

//reallocate (increase or decrease) memory using the same pointer & size
// syntax ptr = realloc(ptr, newsize)

int main() {
    int *ptr;
    int initialSize = 5; // Initial size of the array
    int newSize;         // New size for reallocation

    // Allocate memory for 5 integers using malloc
    ptr = (int *)malloc(initialSize * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Input values from the user
    printf("Enter %d integers:\n", initialSize);
    for (int i = 0; i < initialSize; i++) {
        scanf("%d", &ptr[i]); // Store input in the allocated memory
    }

    // Display the entered values
    printf("Entered numbers are:\n");
    for (int i = 0; i < initialSize; i++) {
        printf("Number %d = %d\n", i + 1, ptr[i]);
    }

    // Ask the user for the new size of the array
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    // Reallocate memory using realloc
    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    // Check if reallocation was successful
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // If the new size is larger, input additional values
    if (newSize > initialSize) {
        printf("Enter %d more integers:\n", newSize - initialSize);
        for (int i = initialSize; i < newSize; i++) {
            scanf("%d", &ptr[i]); // Store additional input in the reallocated memory
        }
    }

    // Display all values in the reallocated array
    printf("Updated numbers are:\n");
    for (int i = 0; i < newSize; i++) {
        printf("Number %d = %d\n", i + 1, ptr[i]);
    }

    // Free the allocated memory to avoid memory leaks
    free(ptr);

    return 0;
}

