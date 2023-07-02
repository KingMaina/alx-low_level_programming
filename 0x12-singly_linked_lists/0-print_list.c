#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to a list_t list
*
* Return: Number of elements in the list
*/
size_t print_list(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		if (!h->str)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numberOfElements++;
	}

	return (numberOfElements);
}
