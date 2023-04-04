#include "lists.h"

/**
* insert_nodeint_at_index - insert a node at the nth index
* of a listint_t linked list
* @head: pointer to a pointer to the head node
* @idx: index position of the node
* @n: integer
*
* Return: address of the new node, NULL otherwise
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *index_node, *traverse;

	traverse = *head;
	if (*head == NULL || idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}
	index_node = get_nodeint_at_index(*head, idx);
	if (index_node == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error allocating memory. Aborting...\n");
		return (NULL);
	}
	new_node->n = n;
	while (traverse->next != index_node)
		traverse = traverse->next;
	new_node->next = index_node;
	traverse->next = new_node;

	return (new_node);
}
