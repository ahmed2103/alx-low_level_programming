#include "lists.h"

/**
 * get_nodeint_at_index - get the adress of the node with `index'
 * @head: pointer to the head of `listint_t' linked list.
 * @index: the index of the node starts from 0.
 *
 * Return : pointer to the nth node of a listint_t linked list.
 * OR: NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (index && i < index)
	{	
		head = head->next;
		++i;
		if (head == NULL)
			break;		
	}
	return (head);
}
		


