#include <stdlib.h>
#include "main.h"

/**
* *_calloc - allocates memory for an array
* @nmemb: Number of elements in the array
* @size: Number of bytes to allocate for a given data type
*
* Return: A pointer to the allocated memory, otherwise NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i, arrLength;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arrLength = nmemb * size;
	if (size == 1)
		arrLength++;
	ptr = malloc(sizeof(*ptr) * arrLength);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < arrLength; i++)
		ptr[i] = 0;
	if (size == 1)
		ptr[i] = '\0';

	return ((void *)ptr);
}
