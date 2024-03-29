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
	int n;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);

	print_listint(head);
	n = pop_listint(&head);
	printf("- %d\n", n);

	print_listint(head);
	n = pop_listint(&head);
	printf("- %d\n", n);
	
	print_listint(head);
	head = NULL;
	n = pop_listint(&head);
	printf("- %d\n", n);
	
	free_listint2(&head);
	printf("%p\n", (void *)head);

	return (0);
}
