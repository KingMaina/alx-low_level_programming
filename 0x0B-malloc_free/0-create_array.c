#include "main.h"


/**
 * create_array - Creates an array of a given size
 * and initializes it to a specified char
 * @size: The size of the array in bytes
 * @c: Character to intialize the array with
 *
 * Return: Pointer to the array, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *charArray = NULL;

	if (size <= 0)
		return (NULL);
	charArray = malloc(sizeof(*charArray) * size);
	if (charArray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		charArray[i] = c;
	return (charArray);
}
