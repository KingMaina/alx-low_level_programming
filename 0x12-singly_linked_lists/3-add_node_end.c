#include "lists.h"

/**
* *add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer to the head of the list_list
* @str: string to add to the list
*
* Return: Address of the created list_t node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node, *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}
