#include "hash_tables.h"

/**
 * hash_table_delete - deletees a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *deleter, *tmp;

	if (!ht || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		deleter = ht->array[i];
		while (deleter)
		{
			tmp = deleter->next;
			free(deleter->key);
			free(deleter->value);
			free(deleter);
			deleter = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
