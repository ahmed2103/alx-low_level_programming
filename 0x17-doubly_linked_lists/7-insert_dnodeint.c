#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a doubly linked list at
 * index `idx'.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which to insert the new node.
 * @n: Value with which to initialize the new node.
 *
 * Return: Pointer to the new node, or NULL if it could not be created.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    new_node = NULL;

    if (idx == 0)
        return add_dnodeint(h, n);

    for (i = 1; current != NULL; i++)
    {
        if (i == idx)
        {
            if (current->next == NULL)
                new_node = add_dnodeint_end(h, n);
            else
            {
                new_node = malloc(sizeof(dlistint_t));
                if (new_node != NULL)
                {
                    new_node->n = n;
                    new_node->next = current->next;
                    new_node->prev = current;
                    current->next->prev = new_node;
                    current->next = new_node;
                }
            }
            break;
        }
        current = current->next;
    }

    return (new_node);
}
