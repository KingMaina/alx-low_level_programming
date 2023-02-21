#include "main.h"

/**
 * print_alphabet - Prints the alphabet characters in lowercase.
 *
 * Description: Prints the alphabet n lowercase using a custom putchar()
 function _putchar()
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
