#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given `idx' position.
 * @head:douple pointer to the adress of the head of `list_int' linked list.
 * @idx: is the index of the list where the new node should be added.
 * @n: is the number data to store in `n' member of `listint_t' linked list.
 *
 * Returns: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new;
	unsigned int i = 0;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (i == 0)
	{
		new->next = *head;
		*head = new;
		return (new)
	}
	for (p = *head; idx && i < idx - 1; i++)
	{
		p = p->next;
		if (p == NULL)
		{
			break;
			return (NULL);
		}
	}
	new->next = p->next;
	p->next = new;
	return (new);
}
