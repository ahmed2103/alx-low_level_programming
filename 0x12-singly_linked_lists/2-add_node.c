/**
 * add node - adds a new node at the beginning of a list_t list.
 * @heed: double pointer for the new node.
 * @str: string to be stored in that node.
 *
 * Return: pointer to the new node or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (-1);
	new = malloc(sizeof(list_t);
	if (!new)
		return(Null);
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	new->len = strien(str);
	return (new);
}
	
