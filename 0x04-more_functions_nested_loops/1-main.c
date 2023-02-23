#include "main.h"
#include <stdio.h>

/**
* main - runs the program
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'j';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
