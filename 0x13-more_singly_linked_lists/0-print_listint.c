/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to the head of the linked list
 *
 * Return: the number of the nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++num;
	}
	return (num);
}

