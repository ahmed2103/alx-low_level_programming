#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The input string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    
    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    
    // Swap characters from the start and end towards the middle
    while (start < end) {
        // Swap characters using a temporary variable
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        start++;
        end--;
    }
}

