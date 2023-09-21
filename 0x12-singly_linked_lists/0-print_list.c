#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list.
 *@h: pointer to the linked list head.
 *
 * Return: the number of nodes in the giben linked list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}
		h = h->next;
		++num;
	}
	return (num);
}
