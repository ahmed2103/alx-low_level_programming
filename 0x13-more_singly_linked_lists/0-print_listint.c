#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of list `h'
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		++num;
		h = h->next;
	}
	return (num);
}

