#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length to check
 *
 * Return: Integer length of the string
 */
int str_length(char *str) {
    int len = 0;
    while (*str++) {
        len++;
    }
    return len;
}

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 *
 * Return: Pointer to the reversed string
 */
char *reverse_str(char *str) {
    int length = str_length(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[length - i - 1];
        str[length - i - 1] = str[i];
        str[i] = temp;
    }
    return str;
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
    int length1 = str_length(num1) - 1;
    int length2 = str_length(num2) - 1;
    int i = 0;
    int carry = 0;
    int digit1;
    int digit2;

    while (length1 >= 0 || length2 >= 0 || carry) {
        if (i >= result_size) {
            return 0;
        }
        digit1 = 0;
        digit2 = 0;

        if (length1 >= 0)
            digit1 = num1[length1] - '0';
        if (length2 >= 0)
            digit2 = num2[length2] - '0';

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        result[i] = sum + '0';
        i++;
    }

    result[i] = '\0';
    return reverse_str(result);
}
