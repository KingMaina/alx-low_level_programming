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
	insert_nodeint_at_index(&head, 5, 4096);
	print_listint(head);
	printf("-----------------------------\n");
	insert_nodeint_at_index(&head, 1, 8361);
	print_listint(head);
	printf("-----------------------------\n");
	insert_nodeint_at_index(&head, 0, 385);
	print_listint(head);
	printf("-----------------------------\n");
	free_listint2(&head);

	return (0);
}
