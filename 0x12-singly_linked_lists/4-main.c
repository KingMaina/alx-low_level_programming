#include <string.h>
#include "lists.h"

/**
* main - Start of application
*
* Return: Always 0
*/
int main(void)
{
	list_t *head = NULL;

	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Alexandro");

	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
