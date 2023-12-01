#include "hash_tables.h"
/**
 * hash_table_create - creates hash table.
 * @size: size of table.
 * Return: a pointer to a created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	if (size > 0)
	{
		new = malloc(sizeof(hash_table_t));
		if (!new)
			return (NULL);
		new->size = size;
		new->array = malloc(sizeof(hash_node_t *) * size);
		if (!new->array)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			new->array[i] = NULL;
		return (new);
	}
	return (NULL);
}
