#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: douple pointer to the head of a `list_int' linked list
 * @index: is the index of the node that should be deleted. Index starts at 0.
 *
 * Return: `1' on success or `0' on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  unsigned int i;
  listint_t *q, *p;

  if (*head == NULL)
    return (-1);
  
  if (index == 0)
  {
    p = *head;
    *head = (*head)->next;
    free(p);
    return (1);
  }
  
  q = *head;
  p = q->next;
  
  for (i = 1; i < index; i++)
  {
    if (p == NULL)
      return (-1);
    
    q = p;
    p = p->next;
  }
  
  if (p == NULL)
    return (-1);
  
  q->next = p->next;
  free(p);
  
  return (1);
}
