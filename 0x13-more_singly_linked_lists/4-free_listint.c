#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  that frees a `listint_t' list from the heap.
 * @head: pointer to the head of `listint_t'.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
