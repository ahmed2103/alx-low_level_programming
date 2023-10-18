#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * 
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
    {
        s++;
    }
    while (*s == '-' || *s == '+')
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        if (result > (INT_MAX - (*s - '0')) / 10)
        {
            if (sign == 1) 
            {
                return INT_MAX;
            }
            else
            {
                return (INT_MIN);
            }
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return (result * sign);
}

