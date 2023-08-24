#include "main.h"

/**
 * custom_strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int custom_strlen(char *s)
{
    int count = 0;

    while (*s++)
    count++;
    return (count);
}

/**
 * reverse_string - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * Return: A pointer to the reversed string.
 */
char *reverse_string(char *s)
{
    int length = custom_strlen(s), i = 0;
    char temp;

    for (i = 0; i < length / 2; i++)
    {
        temp = s[length - i - 1];
        s[length - i - 1] = s[i];
        s[i] = temp;
    }
    return (s);
}

/**
 * add_infinite_strings - Adds two arbitrarily long strings of digits.
 * @n1: The first digit string.
 * @n1: The second digit string.
 * @r: The buffer to store the result.
 * @r: The size of the result buffer.
 *
 * Return: A pointer to the result buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = custom_strlen(n1), len2 = custom_strlen(n2), i = 0, digit1, digit2, carry = 0;

    for (len1--, len2--, size_r--; len1 >= 0 || len2 >= 0 || carry; len1--, len2--, i++)
    {
        if (i >= size_r)
            return (0);
        digit1 = 0;
        digit2 = 0;
        if (len1 >= 0)
            digit1 = n1[len1] - '0';
        if (len2 >= 0)
            digit2 = n2[len2] - '0';
        digit1 = digit1 + digit2 + carry;
        carry = digit1 / 10;
        digit1 %= 10;
        r[i] = digit1 + '0';
    }
    r[i] = '\0';
    return (reverse_string(r));
}
