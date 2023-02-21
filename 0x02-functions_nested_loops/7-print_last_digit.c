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
	int lastDigit = num % 10;

	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
