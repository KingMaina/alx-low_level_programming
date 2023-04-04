#include "lists.h"

/**
* get_nodeint_at_index - searches for the nth node
* of a listint_t linked list
* @head: pointer to the head node
* @index: index position of the node
*
* Return: pointer to the nth node described by index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	size_t i;

	if (head == NULL)
		return (NULL);
	traverse = head;
	i = 0;
	while (traverse != NULL)
	{
		if (i == index)
			return (traverse);
		traverse = traverse->next;
		i++;
	}
	return (NULL);
}
