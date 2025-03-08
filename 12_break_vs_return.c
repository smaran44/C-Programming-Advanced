#include <stdio.h>

void testBreak() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exits the loop, but function continues
        }
        printf("%d ", i);
    }
    printf("\nFunction continues after loop\n");
}

void testReturn() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            return;  // Exits the function immediately
        }
        printf("%d ", i);
    }
    printf("\nThis won't print because function is exited\n");
}

int main() {
    printf("Using break:\n");
    testBreak();  
    printf("\nUsing return:\n");
    testReturn();  
    return 0;
}
