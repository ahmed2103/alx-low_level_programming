#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds the first occurrence of any character specified
 * @s: The C string to search.
 * @accept: The characters to search for.
 * Return: A pointer to the first matching character in s, or NULL if not found.
 **/
char *_strpbrk(char *s, const char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
        {
            return s;
        }
        s++;
    }
    return NULL;
}
