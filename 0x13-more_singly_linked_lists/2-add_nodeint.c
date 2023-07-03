#include "lists.h"

/**
* add_nodeint - Adds a node at the beginning of a linked list
* of type list_t
* @head: pointer to a pointer to the head node
* @n: Integer
*
* Return: Address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		printf("Error allocating memory. Aborting...");
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
