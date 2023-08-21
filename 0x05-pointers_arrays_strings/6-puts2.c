#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        putchar(str[i]);
        i += 2; // Move to every other character
    }
    
    putchar('\n'); // Print a newline character after printing the characters
}

