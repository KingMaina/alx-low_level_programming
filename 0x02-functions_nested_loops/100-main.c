#include <stdio.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Runs a program to print the times table until n
 * Return: 0 (Success)
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	_putchar('\n');

	return (0);
}
