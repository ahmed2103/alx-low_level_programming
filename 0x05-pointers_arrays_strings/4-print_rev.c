#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string to be printed in reverse.
 */
void print_rev(char *s)
{
    int length = 0;

    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }

    // Print characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    
    putchar('\n'); // Print a newline character after the reversed string
}

