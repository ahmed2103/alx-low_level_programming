#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add node - adds a new node at the beginning of a list_t list.
 * @heed: double pointer for the new node.
 * @str: string to be stored in that node.
 *
 * Return: pointer to the new node or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t);

	if (!new)
		return(NULL);
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	new->len = strien(str);
	return (new);
}
	
