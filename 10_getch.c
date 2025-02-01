#include <stdio.h>
#include <conio.h> // For getch()

int main() {
    char ch;

    printf("Press any key: ");
    ch = getch(); // Reads a character without displaying it

    printf("\nYou pressed: %c\n", ch);

    return 0;
}

/*The program waits for you to press a key.
getch() captures the key but does not display it.
The program then prints the character.*/