/**
 * add_node_end - adds node to the end of linked list.
 * @head: douple pointer to the stat of the list.
 * @str: pointer to the character array stored at the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
		
	new = malloc(sizeof(list_t));
	if (!new)
		return(NULL);
	new->str = strdup(str);
	new->len = strien(str);
	new->next = NULL;
		if (*head)
		{
			while (temp->next)
				temp = temp->next;
			last->next =new;
		}
		else
			*head = new;
	return (new);
}
