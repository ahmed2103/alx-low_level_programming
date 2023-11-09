#include "lists.h"

/**
 * sum_dlistint - Sums up the values of a doubly linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of the values in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
