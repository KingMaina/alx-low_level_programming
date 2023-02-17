#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of
 * single-digit numbers separated by commas.
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
		number++;
	}
	putchar(10);

	return (0);
}
