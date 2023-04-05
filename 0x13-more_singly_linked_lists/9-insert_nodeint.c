#include "lists.h"

/**
* add_nodeint - Adds a node at the beginning of a linked list
* of type list_t
* @head: pointer to a pointer to the head node
* @n: Integer
*
* Return: Address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		printf("Error allocating memory. Aborting...");
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
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

/**
* insert_nodeint_at_index - insert a node at the nth index
* of a listint_t linked list
* @head: pointer to a pointer to the head node
* @idx: index position of the node
* @n: integer
*
* Return: address of the new node, NULL otherwise
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node, *traverse;

	if (head == NULL)
		return (NULL);
	if (*head == NULL || idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}
	if (idx == listint_len(*head))
		return (add_nodeint_end(head, n));
	current_node = get_nodeint_at_index(*head, idx);
	if (current_node == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	traverse = *head;
	while (traverse->next != current_node)
	{
		traverse = traverse->next;
	}
	new_node->next = current_node;
	traverse->next = new_node;

	return (new_node);
}
