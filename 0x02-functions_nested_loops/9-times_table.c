#include "main.h"

/**
 * times_table - prints the times table.
 *
 * Description: Prints the times table.
 * Returns: void
 */
void times_table(void)
{
	int row = 0;
	int column;
	int product;
	int tens;
	int ones;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
