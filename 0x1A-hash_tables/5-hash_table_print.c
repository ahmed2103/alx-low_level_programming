#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	unsigned int lastKey = 0;
	hash_node_t *printer;

	if (ht == NULL)
		return;

	while (lastKey < ht->size && ht->array[lastKey] == NULL)
		lastKey++;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	printer = ht->array[i];
	while (printer)
		{
		printf("'%s': '%s'", printer->key, printer->value);
		if (i != lastKey - 1)
			printf(", ");
		printer = printer->next;
		}
	}
	printf("}\n");
}
