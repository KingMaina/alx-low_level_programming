#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
	int row, column;
	int threshold = size - 1;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				if (column > threshold)
					_putchar('#');
				else
					_putchar(' ');
			}
			threshold--;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
