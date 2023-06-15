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
* *string_nconcat - concatenates two strings
* @s1: First string
* @s2: Second string
* @n: number of bytes to copy from the second string, s2
*
* Return: A pointer to the allocated memory, otherwise NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1Length = 0, s2Length = 0;

	if (s1 != NULL)
		s1Length = _strlen(s1);
	if (s2 != NULL)
	{
		s2Length = _strlen(s2);
		if (n < s2Length)
			s2Length = n;
	}
	ptr = malloc(sizeof(ptr) * (s1Length + s2Length + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1 && s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2 && j < s2Length; j++)
		ptr[i++] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
