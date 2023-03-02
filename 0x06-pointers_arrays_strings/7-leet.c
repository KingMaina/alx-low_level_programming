#include "main.h"

/**
* leet - encodes a string into 1337.
* @str: String to encode.
*
* Return: a pointer to the encodeed string.
*/
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';
		if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';
		ptr++;
	}
	return (str);
}
