#include "lists.h"

/**
* sum_dlistint - Sum the values in a doubly linked list
* @head: Pointer to the head node.
*
* Return: Sum of values in the linked list, 0 otherwise
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
