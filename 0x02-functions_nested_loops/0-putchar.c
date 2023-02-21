#include <string.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Prints "_putchar" followed by a newline.
 * Return: 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	char char_putchar;
	int loopCounter = 0;

	char_putchar = string[0];

	while (char_putchar != '\0')
	{
		_putchar(char_putchar);
		char_putchar = string[++loopCounter];
	}
	_putchar('\n');

	return (0);
}
