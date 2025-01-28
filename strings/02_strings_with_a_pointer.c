#include <stdio.h>

int main() {
    // String initialized as an array
    char str1[] = "Hello";
    // Attempt to reinitialize the string (this will cause a compilation error)
    // str1 = "World"; // Uncommenting this line will cause an error

    // String initialized as a pointer
    char *str2 = "Hello";
    // Reinitializing the string pointer
    str2 = "World";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}