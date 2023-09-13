#include "hash_tables.h"

/**
 * key_index - Gets the index of the specified key
 * @key: Key
 * @size: size of the hash table
 *
 * Return: Index of the key in the hash table,
 * 0 otherwise
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key)
		return (0);
	if (size > 0)
	{
		index = hash_djb2(key);
		return (index);
	}
	return (0);
}
