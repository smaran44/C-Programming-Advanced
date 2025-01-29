#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  // Use strcspn to find the position of the newline character and replace it with '\0'
    str[strcspn(str, "\n")] = '\0';

    printf("You entered: ");
    puts(str);

    return 0;
}