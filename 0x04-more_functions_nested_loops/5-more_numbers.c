#include "main.h"

/**
* more_numbers - prints the numbers from 0 to 14, ten times.
*
* Return: void
*/
void more_numbers(void)
{
	int i;
	int loopCounter = 0;
	int printNumberCounter = 0;
	int maxNumber = 14;

	while (loopCounter++ <= maxNumber)
	{
		printNumberCounter = 0;
		for (i = '0'; i <= '9';)
		{
			if (printNumberCounter > 9)
				_putchar('1');
			_putchar(i++);
			if (printNumberCounter++ == 9)
				i = '0';
			if (printNumberCounter > 14)
				break;
		}
	_putchar('\n');
	}
}
