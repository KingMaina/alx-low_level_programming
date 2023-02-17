#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet [a-z] in lowercase then
 * uppercase except the letters q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		if (letter == 101 || letter == 113)
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
