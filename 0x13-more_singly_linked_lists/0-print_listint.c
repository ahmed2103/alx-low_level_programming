#inclde "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to the head of the linked list
 *
 * Return: the number of the nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num;
	listint_t *temp;

	num = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		++num;
		temp =temp->next
	}
	return (num);
}

