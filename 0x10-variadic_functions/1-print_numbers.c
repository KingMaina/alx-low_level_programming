#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by a new line
* @separator: The string to print between numbers
* @n: The number of optional integer arguments
* @...: an arbitrary number of arguments
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("\n");
	va_end(numbers);
}
