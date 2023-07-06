#include "main.h"

/**
* get_endianness - Check the endianness of a computer
*
* Return: 0 if Big endian, 1 if Little endian
*/
int get_endianness(void)
{
	unsigned int number = 1;
	char *numberByte;

	numberByte = (char *) &number;
	if (*numberByte == 0)
		return (0);

	return (1);
}
