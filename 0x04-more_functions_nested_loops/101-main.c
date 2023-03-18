#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
* main - runs the program
*
* Return: Always 0.
*/
int main(void)
{
	print_number(1024);
	printf("\n");
	print_number(-1024);
	printf("\n");
	print_number(0);
	printf("\n");
	print_number(124);
	printf("\n");
	print_number(INT_MIN);
	printf("\n");

	return (0);
}
