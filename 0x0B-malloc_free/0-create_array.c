#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array of characters and fill it with a given character
 * @size: The size of the array to create
 * @c: The character to fill the array with
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array=NULL;
   
    array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    unsigned int i;

    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}
