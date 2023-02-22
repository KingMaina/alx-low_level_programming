#include "main.h"

/**
 * print_times_table - prints the times table.
 * @n: The factor to print multiplication table for.
 *
 * Description: Prints the times table.
 * Returns: void
 */
void print_times_table(int n)
{
	int row = 0;
	int column, product;

	if (n >= 0 && n <= 15)
	{
		while (row <= n)
		{
			column = 0;
			while (column <= n)
			{
				product = row * column;
				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product >= 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
