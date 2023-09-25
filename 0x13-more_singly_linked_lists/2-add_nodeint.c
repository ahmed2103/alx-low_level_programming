#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a `listint_t' list.
 * @head: douple pointer to the head of the `listint_t' linked list.
 * @n: integer that will be stored at the new node.
 *
 * Return: pointer to the new node or `NULL' if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
