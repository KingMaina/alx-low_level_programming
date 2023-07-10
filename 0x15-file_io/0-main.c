#include "main.h"

/**
* main - Entry of application
* @ac: number of arguments including main function
* @av: array of pointers to string arguments
*
* Return: Always 0 if success, otherwise error
*/
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);

	return (0);
}
