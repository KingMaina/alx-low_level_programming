#include "lists.h"

/**
* add_nodeint_end - Adds a node at the end of a linked list
* of type list_t
* @head: pointer to a pointer to the head node
* @n: Integer
*
* Return: Address of the new node, NULL otherwise
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *traverse;

	if (new_node == NULL)
	{
		printf("Error allocating memory. Aborting...");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	traverse = *head;
	while (traverse->next)
	{
		traverse = traverse->next;
	}
	traverse->next = new_node;

	return (new_node);
}
