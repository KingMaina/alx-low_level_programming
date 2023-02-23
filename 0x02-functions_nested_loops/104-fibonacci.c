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
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib3;

	printf("%u, %u, ", fib1, fib2);
	for (i = 0; i < maxCount; i++)
	{
		fib3 = fib1 + fib2;
		printf("%u, ", fib3);
		fib1 = fib2;
		fib2 = fib3 >> 1;
	}
	fib3 = fib1 + fib2;
	printf("%u\n", fib3);

	return (0);
}
