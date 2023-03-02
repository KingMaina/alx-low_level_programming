#include "main.h"

/**
* string_toupper - converts all lowercase letters to uppercase in a string.
* @str: The string to modify.
*
* Return: a pointer to the modified string.
*/
char *string_toupper(char *str)
{
	char *string = str;

	while (*string)
	{
		if (*string >= 'a' && *string < 'z')
			*string -= 32;
		string++;
	}
	return (str);
}
