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
	int i = 0;
	unsigned int num1 = 0;
	unsigned int num2 = 1;
	unsigned int sum;

	for (; i < 97; i++)
	{
		sum = num1 + num2;
		printf("%u, ", sum);
		num1 = num2;
		num2 = sum;
	}
	sum = num1 + num2;
	printf("%u\n", sum);

	return (0);
}
