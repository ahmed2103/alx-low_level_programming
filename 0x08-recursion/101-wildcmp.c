#include <stdio.h>
#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard pattern.
 * @s1: The first input string.
 * @s2: The second input string containing wildcards.
 *
 * Description: This function checks if two strings match considering wildcard '*'.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1); /* Both strings are empty, they match */
    
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1)); /* Continue matching next characters */
    
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return (wildcmp(s1, s2 + 1)); /* Skip consecutive '*' */
        
        if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
            return (1); /* Try matching by skipping a character or wildcard */
    }
    
    return (0); /* No match found */
}

