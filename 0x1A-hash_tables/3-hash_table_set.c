#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: to be indexed.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *checker, new;

	if (!ht || !key || !ht->size)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[position]; /*head of the chain*/
	while (checker) /* traverse to check previous key*/
	{
		if (strcmp(checker->key, key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value); /*update*/
				if (!checker->value)
					return (0);
				return (1);
		}
		cheker = checker->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (0);
	}
	new->next = ht->array[idx]; /*head of the chain*/
	ht->array[idx] = new;
	return (1);
}

