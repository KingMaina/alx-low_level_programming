#include "lists.h"

/**
* pop_listint - Removes the first node out of the list
* @head: pointer to a pointer to the head node
*
* Return: the value of the removed node, 0 otherwise if list is empty
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

/**
* delete_nodeint_at_index - deletes a node at the nth index
* of a listint_t linked list
* @head: pointer to a pointer to the head node
* @index: index position of the node to look for
*
* Return: 1 if success, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	prev_node = *head;
	current_node = get_nodeint_at_index(*head, index);
	if (current_node == NULL)
		return (-1);
	while (prev_node->next != current_node)
		prev_node = prev_node->next;
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}
