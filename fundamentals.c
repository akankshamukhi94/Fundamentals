#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

//V2

// Function to demonstrate measuring string lengths
void fundamentals(void) {
    // Print a header to indicate the start of the demonstration
    printf("** Start of Measuring Strings Demo ***\n");

    // Declare a character array to store user input
    char buffer2[BUFFER_SIZE];

    // Use a do-while loop to repeatedly prompt the user for input
    do {
        // Prompt the user to type a string (q - to quit)
        printf("Type a string (q - to quit):\n");

        // Read user input into the buffer, ensuring it doesn't exceed BUFFER_SIZE
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input
        buffer2[strlen(buffer2) - 1] = '\0';

        // Check if the user wants to quit (entered 'q')
        if (strcmp(buffer2, "q") != 0)
            // If not, print the length of the entered string
            printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));

        // Continue the loop until the user enters 'q'
    } while (strcmp(buffer2, "q") != 0);

    // Print a footer to indicate the end of the demonstration
    printf("*** End of Measuring Strings Demo ***\n\n");
}
