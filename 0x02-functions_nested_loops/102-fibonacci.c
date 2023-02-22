#include <stdio.h>
#include "main.h"

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Description: Print first 50 fibonacci numbers
 * Return: void
 */
int main(void)
{
	int i = 0;
	long num1 = 0;
	long num2 = 1;
	long sum;

	for (; i < 49; i++)
	{
		sum = num1 + num2;
		printf("%li, ", sum);
		num1 = num2;
		num2 = sum;
	}
	sum = num1 + num2;
	printf("%li\n", sum);

	return (0);
}
