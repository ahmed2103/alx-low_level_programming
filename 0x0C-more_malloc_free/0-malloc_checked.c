#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory and checks for allocation success
 * @b: The size of memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status code 98 if allocation fails
 */
void *malloc_checked(unsigned int b)
{
    void *n;

    n = malloc(b);

    if (n == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);
    }

    return (n);
}

