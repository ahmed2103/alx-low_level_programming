#include "main.h"

/**
 * _strcat - Concatenates two arrays
 * @dest: Destination array to concatenate to
 * @src: Source array to concatenate from
 *
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
        int dest_len = 0;
        int src_len = 0;
        int i;

        while (dest[dest_len] != '\0')
        {               {
                dest_len++;
        }

        while (src[src_len] != '\0')
        {
                src_len++;
        }

         for (i = 0; i < src_len; i++)
        {
                dest[dest_len + i] = src[i];
        }

         dest[dest_len + src_len] = '\0';

         return (dest);
}
