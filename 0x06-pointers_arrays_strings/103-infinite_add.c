#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length to check
 *
 * Return: Integer length of the string
 */
int str_length(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
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
    int length1; 
    int length1;
    int i = 0;
    int carry = 0;
    length1= str_length(n1) - 1;
    length2= str_length(n2) - 1;

    while (length1 >= 0 || length2 >= 0 || carry) {
        if (i >= size_r - 1) {
            return NULL;
        }
        int digit1;
        int digit2;
        
            digit1 = (length1 >= 0) ? (n1[length1] - '0') : 0;
            digit2 = (length2 >= 0) ? (n2[length2] - '0') : 0;

        int sum;
            sum= digit1 + digit2 + carry;
        carry = sum / 10;
        r[i] = (sum % 10) + '0';
        i++;

        length1--;
        length2--;
    }

    r[i] = '\0';
    return reverse_str(r);
}
