#include "hash_tables.h"
/**
 * key_index - returns index of hashtable value
 * @key: key to hash then indexed
 * @size: size of hash table
 * Return: modulo of hashed key to size of the array of the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
