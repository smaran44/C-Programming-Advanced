#include <stdio.h>  // Standard Input-Output library for file operations

// Define a structure named Employee to store employee details
typedef struct {
    char name[50];  // Character array to store employee's name (max 50 characters)
    int age;        // Integer variable to store employee's age
    float salary;   // Float variable to store employee's salary
} Employee;

int main() {
    // Initialize an Employee structure with sample data
    Employee emp = {"John Doe", 30, 55000.5};

    // Open a binary file "employee.dat" for writing ("wb" mode)
    FILE *file = fopen("employee.dat", "wb");

    // Check if the file was successfully opened
    if (file == NULL) {
        perror("Error opening file");  // Print error message if file opening fails
        return 1;  // Exit the program with an error code
    }

    // Write the Employee structure data to the file
    // fwrite(pointer_to_data, size_of_each_element, number_of_elements, file_pointer)
    fwrite(&emp, sizeof(Employee), 1, file);

    // Close the file after writing to release system resources
    fclose(file);

    // Print success message
    printf("Data written successfully!\n");

    return 0;  // Return 0 to indicate successful execution
}
