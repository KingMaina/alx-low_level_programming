#include <stdio.h>
#include "main.h"

/**
 * print_natural_sum -  Prints sum of natural numbers divisible by 3 or 5
 *
 * Description: Print sum of natural numbers upto 1024
 * that are divisble by 3 or 5.
 * Return: void
 */
void print_natural_sum(void)
{
	int i = 1024;
	int sum = 0;

	for (; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
