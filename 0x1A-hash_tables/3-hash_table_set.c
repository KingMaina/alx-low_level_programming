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
	char *value_copy = strdup(value);

	if (!ht || !(ht->array) || !key || value || !key_copy || !value_copy)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
	{
		temp = malloc(sizeof(*temp));
		if (!temp)
		{
			free(key_copy);
			free(value_copy);
			return (0);
		}
		temp->key = key_copy;
		temp->value = value_copy;
		temp->next = NULL;
		ht->array[index] = temp;
		return (1);
	}
	else if (node->key && (strcmp(node->key, key_copy) == 0))
	{
		if (strcmp(node->value, value) == 0)
		{
			free(key_copy);
			free(value_copy);
			return (1);
		}
		free(node->value);
		node->value = value_copy;
		free(key_copy);
		return (1);
	}
	else if (node->key && (strcmp(node->key, key_copy) != 0))
	{
		temp = malloc(sizeof(*temp));
		if (!temp)
		{
			perror("malloc");
			free(key_copy);
			free(value_copy);
			return (0);
		}
		temp->key = key_copy;
		temp->value = value_copy;
		temp->next = &(ht->array[index]);
		ht->array[index]->next = &temp;
		return (1);
	}
	else
		return (0);
}

