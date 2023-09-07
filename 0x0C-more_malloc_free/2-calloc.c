#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two strings using at most n characters from s2
 * @s1: First string
 * @s2: String to add to the end of s1
 * @n: Maximum number of characters to concatenate from s2
 *
 * Return: Pointer to a new dynamically allocated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *nstr;
    char *empt = "";
    unsigned int i, len, j;
    unsigned int size;

    len = 0;

    if (s1 == NULL)
        s1 = empt;
    if (s2 == NULL)
        s2 = empt;

    while (s1[len] != '\0')
        len++;

    size = (len + n) * sizeof(char) + 1;
    nstr = malloc(size);

    if (nstr == NULL)
        return (NULL);

    i = 0;

    while (i < len && s1[i] != '\0')
    {
        nstr[i] = s1[i];
        i++;
    }

    j = 0;

    while (i < size - 1 && s2[j] != '\0' && j < n)
    {
        nstr[i] = s2[j];
        i++;
        j++;
    }

    nstr[i] = '\0';

    return (nstr);
}
