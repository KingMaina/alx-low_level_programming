#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at the nth index
* of a listint_t linked list
* @head: pointer to a pointer to the head node
* @index: index position of the node to look for
*
* Return: 1 if success, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	current_node = *head;
	current_node = get_nodeint_at_index(*head, index);
	if (current_node == NULL)
		return (-1);
	while (prev_node->next != current_node)
		prev_node = prev_node->next;
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}
