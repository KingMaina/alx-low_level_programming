#include <string.h>
#include "lists.h"

/**
* main - Start of application
*
* Return: Always 0
*/
int main(void)
{
	listint_t *head = NULL;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);

	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 5);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------------------\n");

	print_listint(head);

	return (0);
}
