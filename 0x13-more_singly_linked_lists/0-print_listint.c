#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the head node
*
* Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *listPtr = h;
	size_t numberOfNodes = 0;

	if (h  == NULL)
		return (numberOfNodes);
	while (listPtr->next != NULL)
	{
		printf("%d\n", listPtr->n);
		numberOfNodes++;
		listPtr = listPtr->next;
	}
	printf("%d\n", listPtr->n);
	numberOfNodes++;

	return (numberOfNodes);
}
