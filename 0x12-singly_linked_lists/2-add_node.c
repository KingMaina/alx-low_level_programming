#include "lists.h"

/**
* *add_node - adds a new node at the beginning of a list_t list
* @head: pointer to  the head node
* @str: Name of a person
*
* Return: The new node created
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	
	if (str == NULL)
		return (NULL);
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
