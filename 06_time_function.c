//In C, the time() function is used to retrieve the current system time. It is declared in the time.h library and returns the number of seconds
#include <stdio.h>
#include <time.h>//The time.h header file provides functions to get the current system time and date, manipulate date and time values, and calculate elapsed time.

int main() {
    time_t currentTime;
    //time_t *t: This is a pointer to a time_t variable. If it's not NULL, the function will store the current time in the variable pointed to by t.
    // Get the current time
    currentTime = time(&currentTime);  // or time(NULL);


    // Print the current time in seconds since the epoch
    printf("Current time: %ld seconds since the epoch\n", currentTime);
    //%ld is used to print a long integer value.
    //seconds since the epoch: The epoch is a reference time point used in computing, typically the start of the system's timekeeping. In Unix systems, the epoch is January 1, 1970, at 00:00:00 UTC.
    
    // Convert the time to a human-readable string and print it
    printf("Current time: %s", ctime(&currentTime));
    //The ctime() function converts the time_t value to a string representing the local time. It returns a pointer to a string containing the date and time in the following format:

    
    return 0;
}
