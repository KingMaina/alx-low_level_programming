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

	c = 'R';
	printf("%c: %d\n", c, _isupper(c));
	c = 'g';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}


