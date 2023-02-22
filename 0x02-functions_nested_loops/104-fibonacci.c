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
	long num1 = 1;
	long num2 = 2;
	long sum;

	printf("%lu, %lu, ", num1, num2);
	for (; i < 98; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu, ", sum);
	}
	printf("\n");
	return (0);
}
