#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a value of the provided key
 * @ht: Hash table
 * @key: Key
 * @value: Value to be set or updated
 *
 * Return: 1 if entry added/updated successfully, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *temp = NULL;
	char *key_copy = strdup(key); 

	if (!ht || !key || !key_copy || !value)
		return (0);
	index = hash_djb2((unsigned char *)key_copy);
	node = ht->array[index];
	if (!node)
	{
		node->key = key_copy;
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else if ((strcmp(node->key, key_copy) == 0) && node->key)
	{
		free(node->value);
		node->value = strdup(value);
	}
	else
	{
		temp = malloc(sizeof(*temp));
		if (!temp)
		{
			perror("malloc");
			return (0);
		}
		temp->key = key_copy;
		temp->value = strdup(value);
		temp->next = node->next;
		node = temp;
		return (1);
	}
	return (0);
}

