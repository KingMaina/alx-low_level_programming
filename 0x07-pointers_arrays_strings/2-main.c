#include <stdio.h>
#include "main.h"

/**
* main - Entry point of application.
*
* Return: void
*/
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
		printf("%s\n", f);

	f = _strchr(s, 'r');
	printf("%s\n", f);

	f = _strchr(s, 'h');
	printf("%s\n", f);

	return (0);
}

