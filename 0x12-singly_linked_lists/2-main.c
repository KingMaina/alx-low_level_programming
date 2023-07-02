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


	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");
	add_node(&head, "Alexandro");

	print_list(head);
	return (0);
}
