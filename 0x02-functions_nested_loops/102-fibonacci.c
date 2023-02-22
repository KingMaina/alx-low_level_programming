#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci - Prints first 50 fibonacci numbers
 *
 * Description: Print first 50 fibonacci numbers
 * Return: void
 */
void print_fibonacci(void)
{
	int i = 0;
	long num1 = 1;
	long num2 = 2;
	long sum;

	printf("%lu, %lu, ", num1, num2);
	for (; i < 48; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu, ", sum);
	}
	printf("\n");
}
