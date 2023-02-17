#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char hexNumber = '0';

	while (hexNumber <= '9')
	{
		putchar(hexNumber);
		hexNumber++;
	}

	hexNumber = 'a';

	while (hexNumber <= 'f')
	{
		putchar(hexNumber);
		hexNumber++;
	}
	putchar(10);

	return (0);
}
