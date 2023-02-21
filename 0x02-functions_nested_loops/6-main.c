#include <stdio.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Runs a program to convert an integer to its absolute value
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
