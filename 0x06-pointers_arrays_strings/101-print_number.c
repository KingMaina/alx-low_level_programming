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

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for (i = 0; n / divisor >= 10; i++)
		divisor *= 10;

	for (i = 0; divisor >= 1; i++)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
