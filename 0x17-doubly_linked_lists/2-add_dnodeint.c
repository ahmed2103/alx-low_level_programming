#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list.
 * @head: Address of the head of the linked list.
 * @n: Number to be stored in the new node.
 * Return: Address of the new node or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;  /* Pointer to the new node */

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Set the values of the new node */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* Update pointers if the list is not empty */
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}

	/* Update the head to point to the new node */
	*head = new;

	return (new);  /* Return the address of the new node */
}
