#include "main.h"

/**
* binary_to_uint - Converts a binary number to an
* unsigned integer
* @b: Pointer to a string of 0 and 1 characters
*
* Return: The converted number, 0 otherwise if b is NULL or forbidden
* character is present in the string
*/
unsigned int binary_to_uint(const char *b)
{
	size_t number = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number <<= 1;
		number += b[i] - '0';
	}
	return (number);
}

