#include <stdio.h>
#include "main.h"

/**
* main - Entry point of application.
*
* Return: void
*/
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);

	return (0);
}

