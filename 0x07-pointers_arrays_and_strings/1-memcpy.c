#include "main.h"

/**
* *_memcpy - copies a specified number of bytes from one string to another.
* @dest: destination string to copy memory area to.
* @src: source string to copy memory area from.
* @n: The number of bytes to copy.
*
* Return: A pointer to the destination string.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (*dest == '\0')
	{
		if (n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		else
			break;
	}

	return (dest);
}
