/*1. Void Functions:
If you want a function that does not return any value, you declare the return type as void.*/

#include <stdio.h>

void Message() {
    printf("Hello, World!\n");
}

 void greet(void) {
    printf("Greetings!\n");
}

int main() {
    Message();  // Calling the function
    //Here, the function Message() doesn't return anything, so it's declared with a void return type.


//2. Void Pointers:

//A void pointer is a pointer that has no associated data type. It can hold the address of any type of object and can be typecasted to any other type.
//Here's an example of using a void pointer:

    int num = 10;
    float f = 3.14;
    double d = 3.14159;//double is a data type that can store decimal numbers with precision.
    char ch = 'A';

    void *ptr;

    ptr = &num;
    printf("Value of num = %d\n", *(int *)ptr);//*(int *)ptr is used to typecast the void pointer to an integer pointer before dereferencing it.

    ptr = &f;
    printf("Value of f = %f\n", *(float *)ptr);

    ptr = &d;
    printf("Value of d = %lf\n", *(double *)ptr);//lf is used to read double data type.
    
    ptr = &ch;
    printf("Value of ch = %c\n", *(char *)ptr);


//3. Void as a Function Parameter:
//You can use void as a function parameter to indicate that the function does not take any arguments.
//Here's an example of a function that takes no arguments:


    greet();  // Calling function with no arguments
    
    return 0;
}
