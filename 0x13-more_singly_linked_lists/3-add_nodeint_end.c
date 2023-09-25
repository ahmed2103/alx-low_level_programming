#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: douple pointer to the head of the `listint_t' list.
 * @n: number to store in the node.
 *
 * Return: adress of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{	
		*head = new;
		return (new);
	}
	while(last->next)
		last = last->next;
	last->next = new;
	return (new);
}

