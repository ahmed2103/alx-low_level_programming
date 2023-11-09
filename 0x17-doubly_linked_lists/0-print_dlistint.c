#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: Head of the doubly linked list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);
}
