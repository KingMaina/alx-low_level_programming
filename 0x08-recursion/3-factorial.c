#include "main.h"

/**
 * factorial - gets the factorial of an integer
 * @n: integer
 *
 * Return: Factorial of an integer, n, -1 otherwise to indicate an error
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
