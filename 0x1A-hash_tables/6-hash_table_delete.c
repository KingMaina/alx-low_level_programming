#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to a hash table
 *
 *  Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr_ptr = NULL, *next_ptr = NULL;
	unsigned long int index;

	if (!ht || !(ht->array))
		return;
	for (index = 0; index < ht->size; index++)
	{
		curr_ptr = ht->array[index];
		while (curr_ptr)
		{
			next_ptr = curr_ptr->next;
			free(curr_ptr->key);
			free(curr_ptr->value);
			free(curr_ptr);
			curr_ptr = next_ptr;
		}
	}
	free(ht->array);
	free(ht);
}
