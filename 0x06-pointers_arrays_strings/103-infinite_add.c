#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length to check
 *
 * Return: Integer length of the string
 */
int _strlen(char *s)
{
    int i = 0;

    while (*s++)
        i++;
    return i;
}

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 *
 * Return: Pointer to the reversed string
 */
char *rev_string(char *s)
{
    int length;
    
    length = _strlen(s), i;
    char temp;

    for (i = 0; i < length / 2; i++)
    {
        temp = s[length - i - 1];
        s[length - i - 1] = s[i];
        s[i] = temp;
    }
    return s;
}

/**
 * infinite_add - Adds arbitrarily long strings of digits
 * @n1: The first digit string
 * @n2: The second digit string
 * @r: The result buffer
 * @size_r: The size of the result buffer
 *
 * Return: Pointer to the result buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = _strlen(n1), len2 = _strlen(n2), i = 0, carry = 0;

    for (--len1, --len2, --size_r; len1 >= 0 || len2 >= 0 || carry; --len1, --len2, ++i)
    {
        if (i >= size_r)
            return 0;

        int a = (len1 >= 0) ? n1[len1] - '0' : 0;
        int b = (len2 >= 0) ? n2[len2] - '0' : 0;

        int sum = a + b + carry;
        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    r[i] = '\0';
    return rev_string(r);
}

