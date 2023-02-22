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
	float num1 = 0;
	float num2 = 1;
	float sum;

	for (; i < 97; i++)
	{
		sum = num1 + num2;
		printf("%.0f, ", sum);
		num1 = num2;
		num2 = sum;
	}
	sum = num1 + num2;
	printf("%.0f\n", sum);

	return (0);
}
