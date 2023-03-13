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
* *_strdup - duplicates a string and stores it in the memory heap.
* @str: The string to duplicate
*
* Return: A character pointer to the duplicated string;
* specifically, the address of the first element, otherwise NULL.
*/
char *_strdup(char *str)
{
	char *strCopyPtr;
	unsigned int i, strLength;

	if (str == NULL)
		return (NULL);

	strLength = (unsigned int) _strlen(str) + 1;
	strCopyPtr = (char *) malloc(strLength * sizeof(char));

	if (strCopyPtr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strCopyPtr[i] = str[i];
	strCopyPtr[i] = '\0';

	return (strCopyPtr);
}
