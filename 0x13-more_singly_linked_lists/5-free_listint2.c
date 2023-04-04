#include "lists.h"

/**
* free_listint2 - De-allocates memory of a listint_t linked list
* @head: pointer to pointer to the head node
*
* Description: De-allocates memory of a listint_t linked list
* and resets the head node to NULL
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (*head != NULL)
	{
		current_node = next_node = *head;
		while (current_node->next)
		{
			next_node = next_node->next;
			free(current_node);
			current_node = next_node;
		}
		free(current_node);
		*head = NULL;
	}
}
