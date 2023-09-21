#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - count the number of element in any given linked list.
 * @h: pointer to the first node.
 *
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t len;
	len = 0;

	while (h)
	{
		++len;
		h = h->next;
	}
	return (len);
}
