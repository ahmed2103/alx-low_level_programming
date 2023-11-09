#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a given index in a doubly linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Address of the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int dex = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL && dex != index)
	{
		dex++;
		tmp = tmp->next;
	}

	if (dex == index)
		return (tmp);
	else
		return (NULL);
}
