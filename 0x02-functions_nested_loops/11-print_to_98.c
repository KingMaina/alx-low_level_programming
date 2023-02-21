#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers until 98.
 * @n: starting number to print from.
 *
 * Description: Prints all natural numbers until 98.
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
}
