#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
	int row, column, threshold;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			threshold = size - 1;
			for (column = 1; column <= size; column++)
			{
				if (threshold == 0)
					_putchar('#');
				else
					_putchar(' ');
				threshold--;
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
