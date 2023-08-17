#include "lists.h"

/**
* free_dlistint - Deallocates memory of a doubly linked list.
* @head: Pointer to the head node of the list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_ptr, *next_ptr;

	if (!head)
		return;
	curr_ptr = head;
	next_ptr = head->next;
	while (next_ptr)
	{
		free(curr_ptr);
		curr_ptr = next_ptr;
		next_ptr = next_ptr->next;
	}
	free(curr_ptr);
	head = NULL;
}
