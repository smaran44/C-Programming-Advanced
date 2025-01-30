#include <stdio.h>
#include <unistd.h>  // For sleep() and usleep()

int main() {
    printf("Starting...\n");

    // Using sleep() to pause for 3 seconds
    printf("Sleeping for 3 seconds...\n");
    sleep(3);
    printf("Awake now!\n");

    // Using usleep() to pause for 500 milliseconds (0.5 seconds)
    printf("Sleeping for 0.5 seconds...\n");
    usleep(500000);  // 500,000 microseconds = 0.5 seconds
    printf("Awake again!\n");

    return 0;
}
