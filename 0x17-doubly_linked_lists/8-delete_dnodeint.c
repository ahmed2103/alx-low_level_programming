#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node in a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	if (index == 0)
		return (delete_first_node(head));

	return (delete_node_at_index(head, index));
}

/**
 * delete_first_node - Deletes the first node of a doubly linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_first_node(dlistint_t **head)
{
	dlistint_t *tmp = *head;

	if (tmp->next != NULL)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
	}
	else
	{
		*head = NULL;
	}

	free(tmp);
	return (1);
}

/**
 * delete_node_at_index - Deletes a node at a specific index in a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_node_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int dex = 0;

	while (tmp->next && dex != index)
	{
		dex++;
		tmp = tmp->next;
	}

	if (dex == index)
	{
		delete_node(tmp);
		return (1);
	}

	return (-1);
}

/**
 * delete_node - Deletes a specific node in a doubly linked list.
 * @node: Pointer to the node to delete.
 */
void delete_node(dlistint_t *node)
{
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
	}
	else
	{
		node->prev->next = NULL;
	}

	free(node);
}
