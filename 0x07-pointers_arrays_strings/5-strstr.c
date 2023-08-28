#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to be examined
 * @needle: The substring to search for
 * Return: Pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found
 **/
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return haystack;

        haystack++;
    }

    return NULL;
}
