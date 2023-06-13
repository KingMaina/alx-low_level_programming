#include "main.h"

/**
 * _strdup - Duplicates a given string to a newly allocated space
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, otherwise NULL
*/
char *_strdup(char *str)
{
	char *duplicatedString = NULL;
	size_t strLen = 0, i;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		++strLen;
	duplicatedString = malloc(sizeof(strLen) + 1);
	if (!duplicatedString)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicatedString[i] = str[i];
	duplicatedString[i] = '\0';
	return (duplicatedString);
}
