#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * Allocate and initialize memory for an array.
 *
 * @param nmemb Number of elements.
 * @param size  Size of each element.
 * @return      A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    memset(ptr, 0, nmemb * size);

    return ptr;
}
