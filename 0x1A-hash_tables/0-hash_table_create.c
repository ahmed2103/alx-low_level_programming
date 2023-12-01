#include "hash_tables.h"

/*
 * hash_table_create - creates hash table
 * @size: is the size of the array.
 *
 * Returns a pointer to the newly created hash table on success.
 * otherewise NULL.
 */

 hash_table_t *hash_table_create(unsigned long int size)
{
	
	hash_table_t *new;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return(NULL);

	new->array = malloc(sizeof(hash_node_t) * size);
	if (!new->array)
	{	
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
		new->array[i] = NULL;
	return (new);

}


