#include "variadic_functions.h"

/**
* sum_them_all - Adds all the arguments of the function
* @n: The number of optional arguments
* @...: an arbitrary number of arguments
*
* Return: The sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, unsigned int);
	va_end(numbers);
	return (sum);
}
