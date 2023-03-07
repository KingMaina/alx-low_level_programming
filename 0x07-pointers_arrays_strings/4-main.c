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
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);

	return (0);
}

