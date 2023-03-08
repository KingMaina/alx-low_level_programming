#include "main.h"

/**
* factorial - Gets the factorial of a number.
* @n: integer
*
* Return: The factorial of a number, otherwise -1 to indicate an error.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
