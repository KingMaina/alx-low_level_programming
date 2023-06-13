#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the new ,NULL terminated,
 * concatenated list, otherwise NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *concatenatedList = NULL;
	size_t s1Len = 0, s2Len = 0, i;

	if (s1)
		s1Len = _strlen(s1);
	else
		*s1 = "";
	if (s2)
		s2Len = _strlen(s2);
	else
		*s2 = "";
	concatenatedList = malloc(sizeof(char) * (s1Len + s2Len + SIZE_NULL_BYTE));
	if (!concatenatedList)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concatenatedList[i] = s1[i];
	for (i = 0; s2[i]; i++)
		concatenatedList[i] = s2[i];
	concatenatedList[i] = '\0';
	return (concatenatedList);
}
