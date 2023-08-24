#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>  /* For isdigit */

/* 
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size.
 * 
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int result_index = size_r - 1;

    /* Check if buffer size is sufficient */
    if (size_r <= len1 + 1 || size_r <= len2 + 1) {
        return NULL;  /* Or handle error appropriately */
    }

    r[size_r - 1] = '\0';
    len1--;
    len2--;

    while (len1 >= 0 || len2 >= 0 || carry > 0) {
        int digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
        int digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[result_index] = (sum % 10) + '0';

        len1--;
        len2--;
        result_index--;
    }

    /* Find the starting index for the result */
    int start_index = (r[result_index] == '0') ? result_index + 1 : result_index;

    return &r[start_index];
}
