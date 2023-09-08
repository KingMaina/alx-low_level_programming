#include "lists.h"

/**
* listint_len - Counts the number of nodes
* in a listint_t list
* @h: pointer to the head node
*
* Return: The number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *listPtr = h;
	size_t numberOfNodes = 0;

	if (h == NULL)
		return (0);
	while (listPtr->next != NULL)
	{
		numberOfNodes++;
		listPtr = listPtr->next;
	}
	numberOfNodes++;

	return (numberOfNodes);
}
