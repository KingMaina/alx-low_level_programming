#include <stdlib.h>
#include "main.h"

/**
* *create_array - creates an array of characters and initializes
* it with a specific character.
* @size: Size of the array in bytes.
* @c: Character to initialize the array with.
*
* Return: A character pointer to the created array; specifically, the address
* of the first element, otherwise NULL.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
