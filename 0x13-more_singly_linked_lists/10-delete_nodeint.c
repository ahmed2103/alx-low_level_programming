#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: douple pointer to the head of a `list_int' linked list
 * @index: is the index of the node that should be deleted. Index starts at 0.
 *
 * Return: `1' on success or `0' on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p = *head;

	if (*head == NULL)
		return (0);
	if (!index)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (i = 0; i < index; ++i)
	{	
		p = p->next;
		if (!p)
			break, return (0);
	}
	free(p);
}

