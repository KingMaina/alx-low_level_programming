#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: size of the array
*
* Return: pointer to the created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size > 0)
	{
		hash_table_t *table = malloc(sizeof(*table));

		if (!table)
		{
			perror("malloc");
			return (NULL);
		}
		table->size = size;
		table->array = calloc(table->size, sizeof(*(table->array)));
		if (!table->array)
		{
			perror("malloc");
			return (NULL);
		}
		return (table);
	}
	return (NULL);
}
