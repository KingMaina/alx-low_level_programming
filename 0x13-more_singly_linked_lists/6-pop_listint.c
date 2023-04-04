#include "lists.h"

/**
* pop_listint - Removes the first node out of the list
* @head: pointer to a pointer to the head node
*
* Return: the value of the removed node
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int poppedValue;

	if (ptr == NULL)
		return (0);
	poppedValue = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (poppedValue);
}
