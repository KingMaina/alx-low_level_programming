#include <stdio.h>
#include "main.h"

/**
* main - Entry point of application.
*
* Return: void
*/
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------\n");
	simple_print_buffer(buffer, 98);

	return (0);
}

