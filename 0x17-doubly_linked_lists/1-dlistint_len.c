#include "lists.h"

/**
 * dlistint_len - Returns the length of a doubly linked list.
 * @h: Head of the doubly linked list.
 * Return: Size of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
