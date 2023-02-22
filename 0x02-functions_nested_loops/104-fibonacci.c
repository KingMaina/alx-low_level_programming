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
	long int num1 = 0;
	long int num2 = 1;
	long int sum;

	for (; i < 97; i++)
	{
		sum = num1 + num2;
		printf("%li, ", sum);
		num1 = num2;
		num2 = sum;
	}
	sum = num1 + num2;
	printf("\n");
	return (0);
}
