#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: the key for the value
 *
 * Return: the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *getter;

	if (!key || !ht || !ht->size)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	getter = ht->array[idx];

	while (getter)
	{
		if (strcmp(getter->key, key) == 0)
			return (getter->value);
		getter = getter->next;
	}
	return (NULL);
}
