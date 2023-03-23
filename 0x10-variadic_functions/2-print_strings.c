#include "variadic_functions.h"

/**
* print_strings - print strings followed by a new line
* @separator: The string to print between strng arguments
* @n: The number of optional string arguments
* @...: an arbitrary number of arguments
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (separator == NULL || i == n - 1)
			printf("%s", string == NULL ? "(nil)" : string);
		else
			printf("%s%s", string == NULL ? "(nil)" : string, separator);
	}
	printf("\n");
	va_end(strings);
}
