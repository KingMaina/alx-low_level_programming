#include "main.h"

/**
 * _pow_recursion - Gets the value of  a number raised to a power
 * @x: integer
 * @y: the power factor
 *
 * Return: The value of x raised to the power of y
 *
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
