#include "main.h"

/**
* cap_string - capitalizes a string.
* @str: The string to capitalize.
*
* Return: a pointer to the capitalized string.
*/
char *cap_string(char *str)
{
	int prev, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		prev = i - 1;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			if (str[prev] == ' ' || str[prev] == '\t')
				str[i] -= 32;
			else if (str[prev] == '\n' || str[prev] == ',')
				str[i] -= 32;
			else if (str[prev] == ';' || str[prev] == '.')
				str[i] -= 32;
			else if (str[prev] == '!' || str[prev] == '?')
				str[i] -= 32;
			else if (str[prev] == '"' || str[prev] == '(')
				str[i] -= 32;
			else if (str[prev] == ')' || str[prev] == '{')
				str[i] -= 32;
			else if (str[prev] == '}')
				str[i] -= 32;
		}
	}

	return (str);
}
