#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime; // Variable to store raw time
    struct tm *timeinfo; // Pointer to a struct to hold local time info
    char buffer[80]; // Buffer to store formatted time string

    // Get the current time in seconds since the epoch (January 1, 1970)
    time(&rawtime);
    
    // Convert the raw time to local time structure
    timeinfo = localtime(&rawtime);

    // Format time into a human-readable string
    // %A - Full weekday name
    // %B - Full month name
    // %d - Day of the month (01-31)
    // %Y - Year
    // %H - Hour (01-24)
    // %I - Hour (01-12)
    // %M - Minutes (00-59)
    // %S - seconds (00-59)
    // %p - AM/PM notation

    strftime(buffer, sizeof(buffer), "Today is %A, %B %d, %Y - %I:%M:%S %p", timeinfo);

    // Print the formatted time in 12HR format
    printf("%s\n", buffer);

    strftime(buffer, sizeof(buffer), "Today is %A, %B %d, %Y - %H:%M:%S", timeinfo);

    // Print the formatted time in 24HR format
    printf("%s\n", buffer);


    return 0;
}
