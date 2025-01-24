//To generate a random number in C, you can use the rand() function, which is part of the C Standard Library. Here's how you can use it:
//Step 1 : Include the necessary header
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <stdlib.h> is required to use the rand() function.
//#include <time.h> is required to use the srand() function.

//Step 2 : Seed the random number generator
//Before you can generate random numbers, you need to seed the random number generator using the srand() function.
//The srand() function sets the starting point for producing a series of pseudo-random numbers.
//You should only seed the random number generator once in your program.
//If you seed the random number generator multiple times, you will get the same random numbers each time.
//To seed the random number generator, you can use the time() function to get the current time in seconds since the Unix epoch.
//Here's how you can seed the random number generator:


int main() {
    srand(time(0));  // Seed the random number generator

//Step 3 : Generate a random number using the rand() function
//Once you have seeded the random number generator, you can generate random numbers using the rand() function.

    int random_number = rand();  
    printf("Random number: %d\n", random_number);

    // Generate a random number between 0 and 100
    int random_number_in_range = rand() % 101;
    printf("Random number between 0 and 100: %d\n", random_number_in_range);

    return 0;
}

    