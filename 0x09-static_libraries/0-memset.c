#include "main.h"

/**
* *_memset - fills the memory of a string array with a constant byte.
* @s: string.
* @b: byte to fill memory with.
* @n: The byte size of the array to fill.
*
* Return: A pointer to the string.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
