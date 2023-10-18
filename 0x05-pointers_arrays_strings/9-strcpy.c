#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string pointed to by src to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * 
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return original_dest;
}

