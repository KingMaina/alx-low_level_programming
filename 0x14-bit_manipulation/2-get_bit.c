#include "main.h"

/**
* get_bit - Returns the bit value at a given index
* @n: number to search
* @index: The index position
*
* Return: The value of the bit at the index position
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
