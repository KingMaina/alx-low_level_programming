#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the digits 0-9
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number++);
	}
	printf("\n");

	return (0);
}
