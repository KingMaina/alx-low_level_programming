#include "main.h"

/**
 * print_number - prints a number
 * @n: integer
 *
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	unsigned int nCopy;

	if (n < 0)
	{
		_putchar('-');
		nCopy = -n;
	}
	else
	{
		nCopy = n;
	}
	while (nCopy / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = nCopy / divisor;
		_putchar(digit + '0');
		nCopy %= divisor;
		divisor /= 10;
	}
}
