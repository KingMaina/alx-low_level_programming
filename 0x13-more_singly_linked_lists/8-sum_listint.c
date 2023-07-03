#include "lists.h"

/**
* sum_listint - calculates the sum of all the data
* in a listint_t linked list
* @head: pointer to the head node
*
* Return: pointer to the nth node described by index
*/
int sum_listint(listint_t *head)
{
	listint_t *traverse;
	int sum = 0;

	traverse = head;
	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
