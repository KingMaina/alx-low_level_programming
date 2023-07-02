#include "lists.h"

/**
* list_len - COunts the number of items in a linked list list_t list
* @h: pointer to a list_t list
*
* Return: Number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		h = h->next;
		numberOfElements++;
	}

	return (numberOfElements);
}
