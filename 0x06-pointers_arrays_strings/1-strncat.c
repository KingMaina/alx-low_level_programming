#include "main.h"

/**
* _strncat - concatenates two strings.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to copy from source string.
*
* Return: A pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while (n--)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);
}
