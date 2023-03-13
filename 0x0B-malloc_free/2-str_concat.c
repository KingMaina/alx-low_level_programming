#include <stdlib.h>
#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: string
*
* Return: The length of te string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
* *str_concat - Concatenates two strings
* @s1: First string to copy from.
* @s2: Second string to copy from.
*
* Return: A pointer to the concatenated string on the memory heap.
*/
char *str_concat(char *s1, char *s2)
{
	char *strConcat;
	int i, j, s1Length, s2Length, strLength;

	if (s1 == NULL)
		s1Length = 0;
	else
		s1Length = _strlen(s1);
	if (s2 == NULL)
		s2Length = 0;
	else
		s2Length = _strlen(s2);

	strLength = s1Length + s2Length + 1;
	strConcat = (char *) malloc(strLength * sizeof(char));
	if (strConcat == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
		strConcat[i] = s1[i];
	for (j = 0; s2 && s2[j]; j++)
		strConcat[i++] = s2[j];
	strConcat[i] = '\0';

	return (strConcat);
}
