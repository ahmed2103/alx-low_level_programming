#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length to check
 *
 * Return: Integer length of the string
 */
int _strlen(char *s) {
    int i = 0;
    while (*s++) {
        i++;
    }
    return i;
}

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 *
 * Return: Pointer to the reversed string
 */
char *rev_string(char *s) {
    int l = _strlen(s);
    for (int i = 0; i < l / 2; i++) {
        char t = s[l - i - 1];
        s[l - i - 1] = s[i];
        s[i] = t;
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
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int l1 = _strlen(n1) - 1;
    int l2 = _strlen(n2) - 1;
    int i = 0;
    int c = 0;

    while (l1 >= 0 || l2 >= 0 || c) {
        if (i >= size_r) {
            return NULL;
        }
        int a = (l1 >= 0) ? n1[l1] - '0' : 0;
        int b = (l2 >= 0) ? n2[l2] - '0' : 0;
        a = a + b + c;
        c = a / 10;
        a %= 10;
        r[i] = a + '0';
        l1--;
        l2--;
        i++;
    }
    r[i] = '\0';
    return rev_string(r);
}
