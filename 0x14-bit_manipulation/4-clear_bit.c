#include "main.h"

/**
* clear_bit - Sets the bit value at a given index to 0 of an integer
* @n: pointer to a number
* @index: The index position
*
* Return: 1 if successful, -1 otherwise if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_mask = ~(1L << index);
	*n &= bit_mask;

	return (1);
}
