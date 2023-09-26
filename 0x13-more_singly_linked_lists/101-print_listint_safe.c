#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of linked list
 *
 * Returns: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp2, *temp = head;
	size_t j, i = 0;

	if (!head)
		exit(98);

	while (temp)
	{
		printf("[%p] %d", (listint_t *)temp, temp->n);
		++i;
		temp2 = head;
		j = 0;
		while (i < j)
		{
			if (temp2 == temp)
			{
				printf("-> [%p] %d", (listint_t *)temp, temp->n);
				return(counter);
			}
			temp2 = temp2->next;
			++j;
	}
	return(counter);
}

