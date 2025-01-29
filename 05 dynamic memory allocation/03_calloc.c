#include <stdio.h>
#include <stdlib.h>

//calloc stands for continuous allocation

int main() {
    int *ptr; // Declare a pointer to hold the address of the allocated memory

    // Allocate memory for 5 integers using calloc
    // calloc initializes all allocated memory to 0
    ptr = (int *)calloc(5, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Display the initialized values (all should be 0)
    printf("Values initialized by calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d = %d\n", i + 1, ptr[i]);
    }

     printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]); // Store input in the allocated memory
    }

    printf("Values initialized by calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d = %d\n", i + 1, ptr[i]);
    }

    // Free the allocated memory to avoid memory leaks
    free(ptr);

    return 0;
}