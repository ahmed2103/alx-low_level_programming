#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string.
 * @accept: character in str1 that matches one of the characters in str2.
 * Return: string s that matches any character specified in accept.
 **/
char *_strpbrk(char *s, char *accept)
const char *c =accept
{
    for (; *s != '\0'; s++)
    {
        for (; *c != '\0'; c++)
        {
            if (*s == *c)
            {
                return s;
            }
        }
    }
    return (NULL);
}
