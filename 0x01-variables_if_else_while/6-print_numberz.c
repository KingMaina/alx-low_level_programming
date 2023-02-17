#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the digits 0-9 using putchar()
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number++);
	}
	putchar(10);

	return (0);
}
