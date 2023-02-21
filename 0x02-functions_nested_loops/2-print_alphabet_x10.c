#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times in lowercase.
 *
 * Description: Prints the alphabet in lowercase ten times
 * using a custom putchar() function
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int loopCounter = 0;

	while (loopCounter < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter++);
		}
		_putchar('\n');
		loopCounter++;
		letter = 'a';
	}
}
