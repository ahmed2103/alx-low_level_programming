#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

