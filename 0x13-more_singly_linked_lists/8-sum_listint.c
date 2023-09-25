#include "lists.h"

/**
 * sum_listint - function that get the sum of `n' in listint_t.
 * @head: adress of the head of linked list.
 *
 * Return: sum of numbers stored in `listint_t linked' list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (!head)
		return (0);
	for(; head; head = head->next)
		sum += head->n;
	return (sum);
}
