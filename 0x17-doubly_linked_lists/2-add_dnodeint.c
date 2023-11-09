#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list.
 * @head: Address of the head of the linked list.
 * @n: Number to be stored in the new node.
 * Return: Address of the new node or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}

	*head = new;

	return (new);
}
