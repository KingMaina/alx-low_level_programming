#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: the length of the diagonal line
*
* Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j++ < i)
			{
				if (i == 0)
				{
					_putchar('\\');
					_putchar('\n');
					_putchar(' ');
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
