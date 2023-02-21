#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @num: integer to get digit to print.
 *
 * Description: Print the last digit of a number.
 * Return: the last digit of the number.
 */
int print_last_digit(int num)
{
	unsigned int lastdigit = num % 10;

	_putchar(lastdigit);
	return (lastdigit);
}
