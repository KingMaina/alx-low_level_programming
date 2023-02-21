#include <stdio.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Runs a program to print the last digit of a number
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	print_last_digit(-1);
	print_last_digit(60);
	print_last_digit(-98);
	r = print_last_digit(-45763);
	printf("%d\n", r);

	return (0);
}
