#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - allocates memory given the number of  bytes
* @b: The number of bytes to allocate
*
* Return: A poiter to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
