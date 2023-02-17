#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet [a-z] in lowercase in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar(10);
	return (0);
}
