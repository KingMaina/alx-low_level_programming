#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of  even fibonacci values below 4 million.
 *
 * Description: Prints the sum of even fibonacci numbers below 4000000.
 * Return: void
 */
int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	long int sum = 0;
	long int evenSum = 0;

	while (sum < 4000000)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
		{
			evenSum += sum;
		}
		num1 = num2;
		num2 = sum;
	}
	printf("%li\n", evenSum);

	return (0);
}
