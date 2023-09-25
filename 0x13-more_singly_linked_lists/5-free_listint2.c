#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees `listint_t' from the heap and sets head to NULL.
 * @head: douple pointer to the head of the linked list.
 * we made it douple pointer so we can pass by reference the adress of the head
 * and set it to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (!head)
		return;
	while (*head)
		temp = (*head)->next;
		free (*head);
		*head =temp;
}


