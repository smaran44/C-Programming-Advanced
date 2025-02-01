#include <stdio.h>  // Standard Input-Output library for file operations

// Define a structure named Employee to store employee details
typedef struct {
    char name[50];  // Character array to store employee's name (max 50 characters)
    int age;        // Integer variable to store employee's age
    float salary;   // Float variable to store employee's salary
} Employee;

int main() {
    Employee emp;  // Declare a variable of type Employee to store the read data

    // Open the binary file "employee.dat" in read mode ("rb" - read binary)
    FILE *file = fopen("employee.dat", "rb");

    // Check if the file was successfully opened
    if (file == NULL) {
        perror("Error opening file");  // Print error message if file opening fails
        return 1;  // Exit the program with an error code
    }

    // Read the Employee structure data from the file
    // fread(pointer_to_store_data, size_of_each_element, number_of_elements, file_pointer)
    fread(&emp, sizeof(Employee), 1, file);

    // Close the file after reading to release system resources
    fclose(file);

    // Print the retrieved employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);  // Print employee's name
    printf("Age: %d\n", emp.age);    // Print employee's age
    printf("Salary: %.2f\n", emp.salary);  // Print employee's salary with 2 decimal places

    return 0;  // Return 0 to indicate successful execution
}

