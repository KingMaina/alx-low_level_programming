#include <stdlib.h>
#include "main.h"

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

	strLength = (unsigned int) _strlen(str);

	if (strLength == 0)
		return (NULL);
	strLength++;
	strCopyPtr = (char *) malloc(strLength * sizeof(char));

	if (strCopyPtr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strCopyPtr[i] = str[i];
	strCopyPtr[i] = '\0';

	return (strCopyPtr);
}
