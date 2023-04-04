#include "lists.h"

/**
* free_listint - De-allocates memory of a listint_t linked list
* @head: pointer to the head node
*
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = next_node = head;

	while (current_node->next)
	{
		next_node = next_node->next;
		free(current_node);
		current_node = next_node;
	}
	free(current_node);
}
