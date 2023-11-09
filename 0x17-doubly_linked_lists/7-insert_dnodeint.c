#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a doubly linked list at
 * index `idx'.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which to insert the new node.
 * @n: Value with which to initialize the new node.
 *
 * Return: Pointer to the new node, or NULL if it could not be created.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur = *h;
	unsigned int cur_idx;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, 0));

	for (cur_idx = 0; cur != NULL; cur_idx++)
	{
		if (cur_idx == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = cur->next;
			new->prev = cur;

			if (cur->next != NULL)
				cur->next->prev = new;

			cur->next = new;
			return (new);
		}
		cur = cur->next;
	}

	return (NULL);
}
