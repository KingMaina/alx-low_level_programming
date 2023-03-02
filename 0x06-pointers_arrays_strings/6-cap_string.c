#include "main.h"

/**
* cap_string - capitalizes a string.
* @str: The string to capitalize.
*
* Return: a pointer to the capitalized string.
*/
char *cap_string(char *str)
{
	char *string = str;

	while (*string)
	{
		if (*string == ' ' || *string == '\t')
			*(string + 1) -= 32;
		else if (*string == '\n' || *string == ',')
			*(string + 1) -= 32;
		else if (*string == ';' || *string == '.')
			*(string + 1) -= 32;
		else if (*string == '!' || *string == '?')
			*(string + 1) -= 32;
		else if (*string == '"' || *string == '(')
			*(string + 1) -= 32;
		else if (*string == ')' || *string == '{')
			*(string + 1) -= 32;
		else if (*string == '}')
			*(string + 1) -= 32;
		string++;
	}

	return (str);
}
