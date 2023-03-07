#include "main.h"

/**
* *_strchr - locates a character in a string
* @s: The string to search.
* @c: A character to search.
*
* Return: A pointer to the location of the found character, otherwise NULL
*/
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ('\0');
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
