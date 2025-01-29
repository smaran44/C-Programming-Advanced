#include <stdio.h>
#include <stdlib.h>

//malloc stands for memory allocation

int main() {
    int *ptr; // Declare a pointer to hold the address of the allocated memory

    // Allocate memory for 5 integers using malloc
    ptr = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code

    }
    
    // Input values from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]); // Store input in the allocated memory
    }

    // Display the entered values
    printf("Entered numbers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d = %d\n", i + 1, ptr[i]);
    }

    // Free the allocated memory to avoid memory leaks
    free(ptr);

    return 0;
}