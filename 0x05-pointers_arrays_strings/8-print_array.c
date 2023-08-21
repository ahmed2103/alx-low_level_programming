#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array followed by a new line.
 * @a: The integer array.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        
        if (i < n - 1) {
            printf(", "); // Print a comma and a space for all elements except the last one
        }
    }
    
    printf("\n"); // Print a newline character after printing the elements
}

