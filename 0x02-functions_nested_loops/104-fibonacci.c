#include <stdio.h>
#include "main.h"

/**
 * main - Prints first 98 fibonacci numbers
 *
 * Description: Print first 98 fibonacci numbers
 * Return: void
 */
int main(void)
{
	int i;
	int maxCount = 98;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib3;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 0; i < maxCount; i++)
	{
		fib3 = fib1 + fib2;
		printf("%lu, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	return (0);
}
