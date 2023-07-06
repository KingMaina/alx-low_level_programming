#include "main.h"

/**
* flip_bits - Calculates the number of bits to flip to convert
* one number to another
* @n: a number
* @m: a number
*
* Return: The number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitMask = 1L;
	unsigned int bitsToFlip = 0;
	unsigned int bitsToShift = 1;

	while (n || m)
	{
		if ((n & bitMask) != (m & bitMask))
			bitsToFlip++;
		n >>= bitsToShift;
		m >>= bitsToShift;
	}

	return (bitsToFlip);
}
