 // Demonstrating string library functions
    char shortName[] = "Shradha";
    int length = strlen(shortName); // Calculate the length of the string
    printf("The length of the name is: %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal); // Copies oldVal into newVal
    printf("Copied string: ");
    puts(newVal);

    char firstStr[50] = "Hello ";//first string should be large enough to hold the concatenated string
    //so we can't use char firstStr[5] = "Hello "; as it will not be able to hold the concatenated string
    //so first string should be greater than or equal to the sum of the lengths of the two strings
    //thats why we have used char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr); // Concatenates secStr to firstStr

    printf("Concatenated string: ");
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    int comparison = strcmp(str1, str2); // Compares str1 and str2 lexicographically
    printf("Comparison result between 'Apple' and 'Banana': %d\n", comparison);

    // Entering a string character by character using %c
    printf("Enter a string character by character (press Enter to stop): ");
    char str[100];
    char ch;
    int i = 0;

    // Read characters until newline is encountered
    while ((ch = getchar()) != '\n') {
        str[i] = ch; // Store each character in the array
        i++;
    }
    str[i] = '\0'; // Null-terminate the string

    // Print the entered string
    printf("Entered string: ");
    puts(str);