#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -   deletes the head node of a listint_t linked list.
 * @head: douple pointer to the head of the `listint_t' linked list.
 *
 * Return:  the head node’s data `n'.if empty return 0.
 */
int pop_listint(listint_t **head)
{
	int del = 0;
	listint_t *p = *head;
	
	if (p)
		return 0;
	del = p->n;
	*head = p->next;
	free(p);
	return (del);
}
