#include "lists.h"

/**
 * reverse_listint - reverse linked list by reversing links.
 * @head: douple pointer to `h' linked list.
 *
 * Returns: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *q, *p = NULL;

	while (*head)
{
		q = p;
		p = *head;
		*head = (*head)->next;
		p->next = q;
}
	*head = p;
