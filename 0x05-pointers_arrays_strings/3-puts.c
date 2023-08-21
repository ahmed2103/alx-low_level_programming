#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The input string to be printed.
 */
void _puts(char *str)
{
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n'); // Print a newline character after the string
}

