#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * 
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1; // Initialize the sign as positive
    int result = 0;

    // Skip leading whitespace characters
    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    // Handle sign characters
    while (*s == '-' || *s == '+') {
        if (*s == '-') {
            sign *= -1; // Toggle the sign
        }
        s++;
    }

    // Convert digits to integer
    while (*s >= '0' && *s <= '9') {
        // Check for potential overflow before updating result
        if (result > (INT_MAX - (*s - '0')) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign; // Apply the sign to the result
}

