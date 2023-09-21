#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that deletes a complete linked list.
 * @head:pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while(head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}


