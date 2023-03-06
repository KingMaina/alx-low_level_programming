#include "main.h"

/**
* print_number - prints an integer to standard output.
* @n: The number to print
*
*/
void print_number(int n)
{
	int i, digit;
	int divisor = 1;
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	for (i = 0; number / divisor >= 10; i++)
		divisor *= 10;

	for (i = 0; divisor >= 1; i++)
	{
		digit = number / divisor;
		_putchar(digit + '0');
		number %= divisor;
		divisor /= 10;
	}
}
