#include "variadic_functions.h"

/**
* print_all - print anything
* @format: Types of arguments passed to the function
* @...: an arbitrary number of arguments
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, num;
	char c;
	char *string;
	double f;
	char *separator = ", ";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i + 1] == '\0')
			separator = "";
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, unsigned int);
				printf("%c%s", c, separator);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d%s", num, separator);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f%s", f, separator);
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", string, separator);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
