#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers using malloc
    ptr = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Free the allocated memory
    free(ptr);
    printf("Memory has been freed.\n");

    //we use it to free memory that is allocated using malloc & calloc

    // Note: After freeing, the pointer should not be used unless reassigned
    ptr = NULL; // Good practice to set the pointer to NULL after freeing

    return 0;
}