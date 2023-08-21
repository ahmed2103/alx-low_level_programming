#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    int start_index;

    // Determine the starting index for the second half
    if (length % 2 == 0) {
        start_index = length / 2; // For even-length strings
    } else {
        start_index = (length + 1) / 2; // For odd-length strings
    }

    // Print characters from the starting index to the end of the string
    while (str[start_index] != '\0') {
        putchar(str[start_index]);
        start_index++;
    }

    putchar('\n'); // Print a newline character after printing the characters
}

