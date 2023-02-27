#include "main.h"

/**
* print_rev - prints a string in reverse to stdout.
* @str: address of the string
*
* Return: void
*/
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(str[i--]);
	}
	_putchar('\n');
}
