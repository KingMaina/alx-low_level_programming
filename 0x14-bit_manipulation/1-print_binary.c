#include "main.h"

/**
* print_binary - prints the binary representaion of a number
* @n: number to convert
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (bit_mask > 0)
	{
		if ((n & bit_mask) == bit_mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			putchar('0');
		bit_mask >>= 1;
	}
	if (flag == 0)
		putchar('0');
}
