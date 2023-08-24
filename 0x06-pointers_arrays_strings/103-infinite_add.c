#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
char *rev_string(char *s)
{
	int l = _strlen(s), i = 0;
	char t;

	for (i = 0; i < l / 2; i++)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
	}
	return (s);
}

/**
 * infinite_add - adds arbitrarily long string of digits
 * @n1: the first digit string
 * @n2: the second digit string
 * @r: the result buffer
 * @size_r: the size of result buffer
 *
 * Return: char pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = _strlen(n1), len2 = _strlen(n2), i = 0, a1, a2, carry = 0;

    for (len1--, len2--, size_r--; len1 >= 0 || len2 >= 0 || carry; len1--, len2--, i++)
    {
        if (i >= size_r)
            return (0);
        
        a1 = 0;
        a2 = 0;
        
        if (len1 >= 0)
            a1 = n1[len1] - '0';
        
        if (len2 >= 0)
            a2 = n2[len2] - '0';
        
        a1 = a1 + a2 + carry;
        carry = a1 / 10;
        a1 %= 10;
        r[i] = a1 + '0';
    }
    
    r[i] = '\0';
    return (rev_string(r));
}
