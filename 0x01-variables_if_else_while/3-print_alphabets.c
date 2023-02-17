#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet [a-z] in lowercase then
 * uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	letter = 65;
	while (letter <= 90)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
