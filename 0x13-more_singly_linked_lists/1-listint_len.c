#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the number of elements in a a linked `listint_t' list.
 * @h: pointer to the head of  a linked list.
 *
 * @Return the number of elements in a liked `listint_t' list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num;
	listint_t *temp = h;

	num = 0;
	while (temp)
	{
		++num;
		temp = temp->next;
	}
	return (num);
}
