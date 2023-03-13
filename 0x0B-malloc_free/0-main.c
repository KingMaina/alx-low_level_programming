#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point of application
*
* Return: Always 0, otherwise 1 if error.
*/
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);

	return (0);
}
