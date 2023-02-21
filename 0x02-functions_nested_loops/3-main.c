#include <string.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Runs a program to check if a character is lowercase.
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
