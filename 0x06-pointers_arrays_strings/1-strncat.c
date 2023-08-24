#include "main.h"

/**
 * _strncat - Concatenates two arrays with a specified limit
 *
 * This function appends at most 'n' characters from the 'src' array to the end
 * of the 'dest' array, ensuring the result is null-terminated.
 *
 * @dest: Destination array to concatenate into
 * @src: Source array to concatenate from
 * @n: Maximum number of characters to append from 'src'
 *
 * Return: Pointer to the resulting concatenated string in 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;

    for (j = 0; dest[j] != '\0'; j++)
    {}

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[j + i] = src[i];
    }
    dest[j + i] = '\0';

    return dest;
}

